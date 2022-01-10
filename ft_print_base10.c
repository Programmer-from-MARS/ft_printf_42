/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base10.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:49:12 by eanastas          #+#    #+#             */
/*   Updated: 2021/11/09 20:49:13 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int num)
{
	int		len;
	char	*str;

	str = ft_itoa(num);
	len = 0;
	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		++len;
	}
	free (str);
	str = NULL;
	return (len);
}

int	ft_print_Uint(unsigned int num)
{
	int		len;
	char	*str;

	str = ft_itoa_unsigned(num);
	len = 0;
	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		++len;
	}
	free (str);
	str = NULL;
	return (len);
}
