/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintlen_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:21:23 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 21:37:04 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_uintlen_base(unsigned int n, int base_len)
{
	int	cnt;

	cnt = 1;
	while (n >= (unsigned int)base_len)
	{
		n /= (unsigned int)base_len;
		cnt++;
	}
	return (cnt);
}
