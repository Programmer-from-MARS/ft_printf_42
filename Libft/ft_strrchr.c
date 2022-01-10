/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:14:12 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 01:14:13 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	int				i;
	int				x;
	unsigned char	*ret;

	ret = NULL;
	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)n)
			x = i;
		i++;
	}
	if ((unsigned char)str[i] == (unsigned char)n)
		x = i;
	if ((unsigned char)str[x] == (unsigned char)n)
	{
		ret = (unsigned char *)str + x;
		return ((char *)ret);
	}
	return (NULL);
}
