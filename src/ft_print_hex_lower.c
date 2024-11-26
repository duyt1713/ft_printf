/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:06:54 by duha              #+#    #+#             */
/*   Updated: 2024/11/26 02:24:18 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_print_hex_lower - Writes an unsigned integer in lowercase hexadecimal
 *                      format to the standard output.
 *
 * @num: The unsigned integer to be written.
 *
 * This function writes the given unsigned integer to the standard output
 * (file descriptor 1) in lowercase hexadecimal format. It recursively processes
 * each digit of the number by dividing the number by 16 and printing the
 * remainder using the characters '0'-'9' and 'a'-'f'.
 *
 * Return: The total number of characters printed.
 *         If an error occurs during printing, the function returns -1.
 */
int	ft_print_hex_lower(uintptr_t num)
{
	const char	*hex;
	int			count;
	int			check;

	hex = "0123456789abcdef";
	count = 0;
	if (num >= 16)
	{
		check = ft_print_hex_lower(num / 16);
		if (check == -1)
			return (-1);
		count += check;
	}
	check = ft_print_char(hex[num % 16]);
	if (check == -1)
		return (-1);
	return (count + 1);
}
