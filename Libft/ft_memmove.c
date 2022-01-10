/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:38:42 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/11 18:21:30 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst1, const void *src1, size_t n)
{
	int		i;
	char	*dst;
	char	*src;

	i = 0;
	if (!src1 && !dst1)
		return (NULL);
	dst = (char *)dst1;
	src = (char *)src1;
	if (dst > src)
	{
		while (n != 0)
		{
			dst[n - 1] = src[n - 1];
			n--;
		}
	}
	while (i < (int)n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
