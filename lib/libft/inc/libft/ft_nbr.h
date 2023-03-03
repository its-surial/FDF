/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:19:46 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 21:19:49 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NBR_H
# define FT_NBR_H

// int
int		ft_intlen(int n);
int		ft_intlen_base(int n, int base_len);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_atoi_base(const char *str, const char *base);
char	*ft_itoa_base(int n, const char *base);
char	*ft_convert_base(char *c, char *base_from, char *base_to);

// unsigned int
int		ft_uintlen(unsigned int n);
int		ft_uintlen_base(unsigned int n, int base_len);

// unsigned long
int		ft_ulonglen(unsigned long n);
int		ft_ulonglen_base(unsigned long n, int base_len);

#endif
