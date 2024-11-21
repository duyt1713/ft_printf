/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:59:40 by duha              #+#    #+#             */
/*   Updated: 2024/11/21 01:04:46 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

int	check_format(const char format)
{
	if (format == 'c')
		ft_print_char;
	if (format == 's')
		ft_print_str;
	if (format == 'p')
		ft_print_pointer;
	if (format == 'd' || format == 'i')
		ft_print_decimal;
	if (format == 'u')
		ft_print_decimal;
	if (format == 'x')
		ft_print_hex;
	if (format == 'X')
		ft_toupper(ft_print_hex);
	if (format == '%')
		ft_print_char('%');
}

int	ft_printf(const char *format, ...)
{
	int		count;
	char	*p;
	va_list	arg;
	va_list	dest;

	va_start(arg, format);
	p = format;
	while (*p)
	{
		if (*p != '%')
			ft_print_char(*p);
		p++;
	}
	va_arg(arg, type);
	va_copy(dest, arg);
	va_end(arg);
	return (count);
}

// void va_start(va_list ap, const char *format);
// argument_type va_arg(va_list ap, argument_type);
// void va_copy(va_list dest, va_list src);
// void va_end(va_list ap);
