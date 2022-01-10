/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:42:02 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 03:42:03 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem1;

	elem1 = (t_list *)malloc(sizeof(t_list));
	if (elem1 == NULL)
		return (NULL);
	elem1->content = content;
	elem1->next = NULL;
	return (elem1);
}
