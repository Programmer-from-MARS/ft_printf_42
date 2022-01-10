/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_letters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:49:20 by eanastas          #+#    #+#             */
/*   Updated: 2021/11/09 20:49:21 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int		len;

	len = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		++len;
	}
	return (len);
}

int	ft_print_char(int c)
{
	if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	write(1, &c, 1);
	return (1);
}

int	ft_print_prosent(void)
{
	write (1, "%", 1);
	return (1);
}
