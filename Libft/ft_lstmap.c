/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:41:59 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 03:42:00 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;
	t_list	*ret;

	ret = NULL;
	while (lst)
	{
		t = ft_lstnew(f(lst -> content));
		if (!t)
		{
			ft_lstclear(&t, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, t);
		lst = lst -> next;
	}
	return (ret);
}
