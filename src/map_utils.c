/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:02:18 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 20:02:22 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <mlx.h>
#include <stdlib.h>

void	free_split(char **split)
{
	int	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
}

void	free_vars(t_vars *vars)
{
	free_map(vars->map);
	if (vars->img)
		free(vars->img);
	free(vars);
}

void	free_all(t_vars *vars)
{
	system("leaks fdf");
	mlx_destroy_window(vars->mlx, vars->win);
	mlx_destroy_image(vars->mlx, vars->img->img);
	free_vars(vars);
}

t_point	new_point(int x, int y, t_vars *vars)
{
	t_point	out;

	out.x = x;
	out.y = y;
	out.z = vars->map->z_mt[y][x];
	if (vars->map->iscolor)
		out.color = vars->map->clrs[y][x];
	else
		out.color = get_z_color(vars, out.z);
	return (out);
}

t_point	get_coords(t_vars *vars, t_point point)
{
	point.x *= vars->zoom;
	point.y *= vars->zoom;
	point.z *= (vars->zoom / 10) * vars->flat;
	rot_x(vars, &point.y, &point.z);
	rot_y(vars, &point.x, &point.z);
	rot_z(vars, &point.x, &point.y);
	isometric(vars, &point.x, &point.y, point.z);
	point.x += vars->shift_x;
	point.y += vars->shift_y;
	return (point);
}
