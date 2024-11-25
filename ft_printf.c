/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:59:40 by duha              #+#    #+#             */
/*   Updated: 2024/11/26 00:59:37 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

/**
 * ft_printf - Custom implementation of the standard printf function.
 *
 * @format: Format string that contains the text to be written to stdout.
 *          It can optionally contain embedded format specifiers that
 *          will be replaced by the values specified in subsequent
 *          additional arguments.
 *
 * Helper function:
 * ft_printf_helper: Processes the format string and arguments,
 *                   updating the count of printed characters.
 * ft_check_format:  Handles individual format specifiers
 *                   and prints the corresponding values.
 *
 * This function formats and prints a series of characters and values to
 * the standard output according to the format string provided. It processes
 * the format specifiers and outputs the corresponding values. It returns
 * the total number of characters printed (excluding the null byte used to
 * end output to strings). If an error occurs (e.g., a '%' at the end of the
 * format string), it returns -1.
 *
 * Return: Total number of characters printed,
 *         or -1 if an error occurs.
 */
int			ft_printf(const char *format, ...);
static int	ft_printf_helper(const char *format, va_list args, int count);
static int	ft_check_format(const char format, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	count = ft_printf_helper(format, args, count);
	va_end(args);
	return (count);
}

static int	ft_printf_helper(const char *format, va_list args, int count)
{
	int	check;

	check = 0;
	while (*format)
	{
		if (*format == '%')
		{
			check = ft_check_format(*++format, args);
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
	else if (format == '\0')
		return (-1);
	return (-1);
}
