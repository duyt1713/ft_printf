/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:59:40 by duha              #+#    #+#             */
/*   Updated: 2024/11/21 22:35:47 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	count = ft_printf_hehe(format, args, count);
	va_end(args);
	return (count);
}

static int	ft_printf_hehe(const char *format, va_list args, int count)
{
	int	check;

	check = 0;
	while (*format)
	{
		if (*format == '%')
		{
			check = ft_check_format(*(++format), args);
			if (check == -1)
				return (-1);
			count += check;
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	return (count);
}

static int	ft_check_format(const char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
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
		ft_print_hex;
	if (format == '%')
		ft_print_char('%');
}

// void va_start(va_list ap, const char *format);
// argument_type va_arg(va_list ap, argument_type);
// void va_copy(va_list dest, va_list src);
// void va_end(va_list ap);
