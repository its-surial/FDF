/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:21:23 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 21:34:58 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_fd.h>

int	ft_putnbr_fd(int n, int fd)
{
	int					cnt;
	short				sign;
	unsigned int		pow_ten;

	cnt = 0;
	pow_ten = 1;
	sign = 0;
	if (n < 0 && ++sign)
		n = -n;
	while (n / pow_ten / 10)
		pow_ten *= 10;
	if (sign)
		cnt += ft_putchar_fd('-', fd);
	while (pow_ten)
	{
		cnt += ft_putchar_fd(n / pow_ten + '0', fd);
		n %= pow_ten;
		pow_ten /= 10;
	}
	return (cnt);
}
