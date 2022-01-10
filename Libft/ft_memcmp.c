/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:13:15 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 01:13:16 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*s1;
	unsigned char		*s2;

	if (n == 0)
		return (0);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (s1[i] == s2[i] && --n)
		i++;
	return ((s1[i] - s2[i]));
}
