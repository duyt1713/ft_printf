/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:01:00 by duha              #+#    #+#             */
/*   Updated: 2024/11/26 02:24:53 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_print_str - Writes a string to the standard output.
 *
 * @str: The string to be written.
 *
 * This function writes the given string to the standard output
 * (file descriptor 1). If the string is NULL, it prints "(null)" instead.
 * It uses the ft_print_char function to print each character of the string.
 *
 * Return: The total number of characters printed.
 *         If an error occurs during printing, the function returns -1.
 */
int	ft_print_str(char *str)
{
	int	count;
	int	check;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		check = ft_print_char(*str);
		if (check == -1)
			return (-1);
		count += check;
		str++;
	}
	return (count);
}
