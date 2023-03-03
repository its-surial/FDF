/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:21:23 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 21:36:49 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen(int n)
{
	int	cnt;

	cnt = !n;
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}