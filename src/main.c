/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:34:16 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 20:51:02 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	t_map	*map;

	map = NULL;
	check_args(&map, ac, av);
	minilib_main(map);
	return (0);
}
