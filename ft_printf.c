/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:59:40 by duha              #+#    #+#             */
/*   Updated: 2024/11/20 18:19:32 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>

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
			ft_putchar(*p);
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
