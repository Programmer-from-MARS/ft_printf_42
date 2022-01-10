/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:13:42 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 01:13:43 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ret;

	ret = NULL;
	i = 0;
	while ((unsigned char)str[i] != (unsigned char)c && str[i] != '\0')
		i++;
	if ((unsigned char)str[i] == (unsigned char)c)
	{
		ret = (char *)str + i;
		return (ret);
	}
	return (0);
}
