/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:14:15 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/11 18:21:28 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_c(char c, char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	int		start;
	char	*ret;

	start = 0;
	while ((set_c(s1[start], (char *)set) == 1) && (s1[start] != '\0'))
		start++;
	end = ft_strlen(s1);
	while (set_c(s1[end - 1], (char *)set) == 1 && end > start)
		end--;
	ret = (char *)malloc((end - start + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (start < end)
		ret[i++] = s1[start++];
	ret[i] = '\0';
	return (ret);
}

static int	set_c(char c, char *set)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen((char *)set);
	while (i < len)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
