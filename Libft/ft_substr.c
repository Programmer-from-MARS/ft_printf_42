/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:14:18 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 01:14:19 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			j;
	size_t			i;
	unsigned char	*ret;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = (unsigned char *)malloc((len + 1) * sizeof(unsigned char));
	if (!ret)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (j < len && (i >= (size_t)start))
		{
			ret[j] = s[i];
			j++;
		}
		i++;
	}
	ret[j] = '\0';
	return ((char *)ret);
}
