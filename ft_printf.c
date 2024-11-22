/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:59:40 by duha              #+#    #+#             */
/*   Updated: 2024/11/22 03:02:21 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_printf_hehe(const char *format, va_list args, int count);
static int	ft_check_format(const char format, va_list args);

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
			count += ft_print_char(*format);
		format++;
	}
	return (count);
}

static int	ft_check_format(const char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_print_decimal(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_udecimal(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_print_hex_lower(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (ft_print_hex_upper(va_arg(args, unsigned int)));
	else if (format == '%')
		return (ft_print_char(format));
	return (-1);
}
