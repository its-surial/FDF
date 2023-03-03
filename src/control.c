/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:06:41 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 19:34:48 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <limits.h>

void	handle_zoom(int keycode, t_vars *vars)
{
	if (keycode == KEY_DOWN)
	{
		if (vars->zoom > 0)
			vars->zoom -= ZOOM_SHIFT;
	}
	if (keycode == KEY_UP)
	{
		if (vars->zoom < INT_MAX)
			vars->zoom += ZOOM_SHIFT;
	}
}

void	handle_move(int keycode, t_vars *vars)
{
	if (keycode == KEY_W)
		vars->shift_y += SHIFT;
	if (keycode == KEY_S)
		vars->shift_y -= SHIFT;
	if (keycode == KEY_A)
		vars->shift_x += SHIFT;
	if (keycode == KEY_D)
		vars->shift_x -= SHIFT;
}

void	handle_flattening(int keycode, t_vars *vars)
{
	if (keycode == KEY_PLUS)
	{
		if (vars->flat < 10)
			vars->flat += 0.1;
	}
	if (keycode == KEY_MINUS)
	{
		if (vars->flat > 0)
			vars->flat -= 0.1;
	}
}

void	handle_rot(int keycode, t_vars *vars)
{
	if (keycode == KEY_U)
		vars->rot_x += ROT_SHIFT;
	if (keycode == KEY_J)
		vars->rot_x -= ROT_SHIFT;
	if (keycode == KEY_I)
		vars->rot_y += ROT_SHIFT;
	if (keycode == KEY_K)
		vars->rot_y -= ROT_SHIFT;
	if (keycode == KEY_O)
		vars->rot_z += ROT_SHIFT;
	if (keycode == KEY_L)
		vars->rot_z -= ROT_SHIFT;
}
