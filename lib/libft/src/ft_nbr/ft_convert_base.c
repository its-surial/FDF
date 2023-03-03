/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:21:23 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 21:36:40 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_nbr.h>
#include <stddef.h>

char	*ft_convert_base(char *n, char *base_from, char *base_to)
{
	int	tmp;

	if (!n || !base_from || !base_to)
		return (NULL);
	tmp = ft_atoi_base(n, base_from);
	return (ft_itoa_base(tmp, base_to));
}
