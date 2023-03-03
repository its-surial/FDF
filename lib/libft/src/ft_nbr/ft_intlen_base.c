/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:21:23 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 21:36:44 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen_base(int n, int base_len)
{
	int	cnt;

	cnt = !n;
	while (n)
	{
		n /= base_len;
		cnt++;
	}
	return (cnt);
}
