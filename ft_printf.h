/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:59:37 by duha              #+#    #+#             */
/*   Updated: 2024/11/22 02:52:05 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>

/* ft_printf is a custom implementation of the standard printf function.
It formats and prints a series of characters and values to the standard output
according to the format string provided. The function takes a format string
followed by a variable number of arguments, processes the format specifiers,
and outputs the corresponding values. It returns the total number of characters
printed (excluding the null byte used to end output to strings). */
int	ft_printf(const char *format, ...);

int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_pointer(void *p);
int	ft_print_udecimal(unsigned int num);
int	ft_print_decimal(int num);
int	ft_print_hex_lower(uintptr_t num);
int	ft_print_hex_upper(uintptr_t num);

#endif
