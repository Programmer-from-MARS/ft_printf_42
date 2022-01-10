/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base16.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:49:17 by eanastas          #+#    #+#             */
/*   Updated: 2021/11/09 21:31:51 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_Lhex(unsigned int x)
{
	int		len;
	long	num;

	len = 0;
	num = (long)x;
	len = 0;
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		++len;
	}
	len += printf_base16_Lutil(num, len);
	return (len);
}

int	ft_print_Shex(unsigned int x)
{
	int		len;
	long	num;

	len = 0;
	num = (long)x;
	len = 0;
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		++len;
	}
	len += printf_base16_Sutil(num, len);
	return (len);
}

int	ft_print_pointer(unsigned long int num)
{
	int		len;

	len = 0;
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		++len;
	}
	len += printf_base16_Sutil(num, len);
	return (len);
}

int	printf_base16_Sutil(unsigned long num, int len)
{
	char	*ret;
	char	*set;
	int		i;

	set = "0123456789abcdef";
	i = 0;
	ret = (char *)malloc(30 * sizeof(char));
	if (!ret)
		return (0);
	while (num != 0)
	{
		ret[i++] = set[num % 16];
		num /= 16;
		++len;
	}
	ret[i] = '\0';
	while (i-- > 0)
		write(1, &ret[i], 1);
	free (ret);
	ret = NULL;
	return (len);
}

int	printf_base16_Lutil(long num, int len)
{
	char	*ret;
	char	*set;
	int		i;

	set = "0123456789ABCDEF";
	i = 0;
	ret = (char *)malloc(30 * sizeof(char));
	if (!ret)
		return (0);
	while (num != 0)
	{
		ret[i++] = set[num % 16];
		num /= 16;
		++len;
	}
	ret[i] = '\0';
	while (i-- > 0)
		write(1, &ret[i], 1);
	free (ret);
	ret = NULL;
	return (len);
}
