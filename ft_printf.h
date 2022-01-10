/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanastas <eanastas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:49:26 by eanastas          #+#    #+#             */
/*   Updated: 2021/11/09 21:45:11 by eanastas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "Libft/libft.h"

int	ft_printf(const char *input, ...);
int	check_arg(va_list ap, const char *input, int i);
int	ft_print_char(int c);
int	ft_print_string(char *str);
int	ft_print_int(int x);
int	ft_print_Uint(unsigned int num);
int	ft_print_Shex(unsigned int num);
int	ft_print_Lhex(unsigned int x);
int	ft_print_pointer(unsigned long int num);
int	ft_print_prosent(void);
int	printf_base16_Lutil(long num, int len);
int	printf_base16_Sutil(unsigned long num, int len);

#endif