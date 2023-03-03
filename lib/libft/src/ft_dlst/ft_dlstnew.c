/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:21:23 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 21:34:24 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

t_dlist	*ft_dlstnew(void *data)
{
	t_dlist	*newdlst;

	newdlst = (t_dlist *)malloc(sizeof(t_dlist));
	if (!newdlst)
		return (NULL);
	newdlst->data = data;
	newdlst->next = NULL;
	newdlst->prev = NULL;
	return (newdlst);
}
