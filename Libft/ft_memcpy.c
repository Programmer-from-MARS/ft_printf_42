/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:13:21 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 01:13:22 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(const void *dst1, const void *src1, size_t n)
{
	int				i;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char *)dst1;
	src = (unsigned char *)src1;
	if (n == 0 || dst == src)
		return (dst);
	while (n != 0)
	{
		dst[i] = src[i];
		i++;
		n--;
	}
	return (dst);
}
