/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:13:10 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 01:13:11 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*mal_num(int minus, int counter);
static char	*fill_nums(long copy, int minus, int counter, char *num);

char	*ft_itoa(int n)
{
	int		counter;
	int		minus;
	long	copy;
	char	*num;

	counter = 0;
	minus = 0;
	copy = (long)n;
	if (n < 0)
		minus = -1;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	if (minus == -1 || copy == 0)
		counter++;
	num = mal_num(minus, counter);
	num = fill_nums(copy, minus, counter, num);
	return (num);
}

static char	*mal_num(int minus, int counter)
{
	char	*num;
	int		i;

	i = 0;
	if (minus == 0)
	{
		num = (char *)malloc(sizeof(char) * (counter + 1));
		if (!num)
			return (NULL);
	}
	if (minus == -1)
	{
		num = (char *)malloc(sizeof(char) * (counter + 1));
		if (!num)
			return (NULL);
	}
	return (num);
}

static char	*fill_nums(long copy, int minus, int counter, char *num)
{
	num[counter] = '\0';
	if (copy == 0)
		num[0] = '0';
	while (counter != 0)
	{
		if (copy < 0)
			copy *= -1;
		counter--;
		num[counter] = (copy % 10) + '0';
		copy /= 10;
	}
	if (minus == -1)
		num[0] = '-';
	return (num);
}
