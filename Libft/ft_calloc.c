/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:12:55 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 04:00:43 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*array;
	int		i;

	i = 0;
	array = (void *)malloc(num * size);
	if (array == NULL)
		return (NULL);
	if (!array)
		return (NULL);
	ft_bzero(array, num * size);
	return (array);
}
