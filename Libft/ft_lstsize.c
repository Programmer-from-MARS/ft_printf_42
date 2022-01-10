/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:42:04 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 03:42:05 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		n;

	n = 1;
	if (!lst)
		return (0);
	while (lst -> next != NULL)
	{
		n++;
		lst = lst->next;
	}
	return (n);
}
