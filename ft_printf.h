/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:59:37 by duha              #+#    #+#             */
/*   Updated: 2024/11/19 16:28:47 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* ft_printf is a custom implementation of the standard printf function.
It formats and prints a series of characters and values to the standard output
according to the format string provided. The function takes a format string
followed by a variable number of arguments, processes the format specifiers,
and outputs the corresponding values. It returns the total number of characters
printed (excluding the null byte used to end output to strings). */
int	ft_printf(const char *format, ...);

#endif
