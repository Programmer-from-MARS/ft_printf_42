/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:13:54 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 01:13:55 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t		len;
	size_t		i;
	size_t		m;

	len = ft_strlen(src);
	i = ft_strlen(dst);
	m = 0;
	if (n == 0)
		return (len);
	if (n < i)
		len += n;
	else
		len += i;
	while (src[m] != '\0' && i < (n - 1) && dst != src)
	{
		dst[i] = src[m];
		i++;
		m++;
	}
	dst[i] = '\0';
	return (len);
}
