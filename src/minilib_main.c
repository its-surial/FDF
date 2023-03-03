/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minilib_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:46:24 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 20:58:57 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <mlx.h>
#include <stdlib.h>
#include <libft/ft_mem.h>
#include <libft/ft_printf.h>

int	minilib_main(t_map *map)
{
	t_vars	*vars;

	ft_printf("Starting minilibx...\n");
	vars = (t_vars *)ft_calloc(1, sizeof(t_vars));
	if (!vars)
		err_exit("Error", MAL_ERROR);
	if (initialise_vars(vars, map))
	{
		err_exit("Error", MAL_ERROR);
	}
	initialise_mlx(vars);
	mlx_hook(vars->win, 2, 1L << 0, key_hook, vars);
	mlx_hook(vars->win, 17, 1L << 17, close_win, vars);
	sketch(vars);
	mlx_loop(vars->mlx);
	return (EXIT_SUCCESS);
	
}
