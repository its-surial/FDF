/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:49:13 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 20:58:01 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <mlx.h>

static double	gradient(int start, int end, int current)
{
	double	position;
	double	distance;

	position = current - start;
	distance = end - start;
	if(!distance)
		return(1.0);
	return (position / distance);
}

static int	emit_light(int start, int end, double gradient)
{
	return ((int)((1 - gradient) * start + gradient * end));
}

int	coloring(t_point current, t_point start, t_point end, t_point alpha)
{
	int		r;
	int		g;
	int		b;
	double	percentage;

	if (current.color == end.color)
		return (current.color);
	if (alpha.x > alpha.y)
		percentage = gradient(start.x, end.x, current.x);
	else
		percentage = gradient(start.y, end.y, current.y);
	r = emit_light((start.color >> 16) & 0xFF, (end.color >> 16) & 0xFF, percentage);
	g = emit_light((start.color >> 8) & 0xFF, (end.color >> 8) & 0xFF, percentage);
	b = emit_light(start.color & 0xFF, end.color & 0xFF, percentage);
	return ((r << 16) | (g << 8) | b);
}

int	get_z_color(t_vars *vars, int cur_z)
{
	double	percentage;

	percentage = gradient(vars->map->min_z, vars->map->max_z, cur_z);
	if (percentage < 0.2)
		return (COLOR_1);
	else if (percentage < 0.4)
		return (COLOR_2);
	else if (percentage < 0.6)
		return (COLOR_3);
	else if (percentage < 0.8)
		return (COLOR_4);
	else
		return (COLOR_5);
}
