/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:13:26 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 01:13:27 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str1, int c, size_t n)
{
	int		i;
	char	*str;

	str = str1;
	i = 0;
	while (n != 0)
	{
		n--;
		str[i] = c;
		i++;
	}
	return (str1);
}
