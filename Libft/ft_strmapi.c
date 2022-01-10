/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:14:02 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 01:14:03 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;
	int				len;

	i = 0;
	len = ft_strlen((char *)s);
	new = (char *) malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while ((int)i != len)
	{
		if (len < 0)
			break ;
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
