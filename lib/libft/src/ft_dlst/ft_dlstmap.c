/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:21:23 by surkumar          #+#    #+#             */
/*   Updated: 2023/02/22 21:34:19 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

t_dlist	*ft_dlstmap(t_dlist *dlst, void *(*f)(void *), void (*del)(void *))
{
	t_dlist	*new;
	t_dlist	*newdlst;

	if (!dlst || !f)
		return (NULL);
	newdlst = NULL;
	while (dlst)
	{
		new = ft_dlstnew(f(dlst->data));
		if (!new)
		{
			ft_dlstclear(&newdlst, del);
			return (NULL);
		}
		ft_dlstadd_back(&newdlst, new);
		dlst = dlst->next;
	}
	return (newdlst);
}
