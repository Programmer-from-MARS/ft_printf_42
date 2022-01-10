/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:13:44 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 01:13:45 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char	*src)
{
	int		len;
	char	*dup;

	len = 0;
	while (src[len] != '\0')
		len++;
	dup = (char *) malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	dup[len] = '\0';
	while (len != 0)
	{
		len--;
		dup[len] = src[len];
	}
	return (dup);
}
