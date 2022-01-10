/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:13:33 by eanastas          #+#    #+#             */
/*   Updated: 2021/10/10 01:13:34 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	copy;

	copy = (long)n;
	if (copy < 0)
	{
		ft_putchar_fd('-', fd);
		copy *= -1;
	}
	if (copy > 9)
	{
		ft_putnbr_fd(copy / 10, fd);
		ft_putchar_fd((copy % 10) + '0', fd);
	}
	else
		ft_putchar_fd(copy + '0', fd);
}
