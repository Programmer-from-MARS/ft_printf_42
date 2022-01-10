/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:14:05 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 01:14:06 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int				i;
	int				m;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = -1;
	m = 0;
	while (((s1[i + 1] != '\0') || (s2[i + 1] != '\0'))
		&& ((size_t)i + 1) < n)
	{
		i++;
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			continue ;
		else
		{
			m = ((unsigned char)s1[i] - (unsigned char)s2[i]);
			break ;
		}
	}
	 return (m);
}
