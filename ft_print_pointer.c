/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:29:51 by duha              #+#    #+#             */
/*   Updated: 2024/11/26 02:24:41 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_print_pointer - Writes a pointer address to the standard output.
 *
 * @p: The pointer to be written.
 *
 * This function writes the given pointer address to the standard output (file
 * descriptor 1) in lowercase hexadecimal format prefixed with "0x". If the
 * pointer is NULL, it prints "(nil)" instead. It uses the ft_print_str
 * function to print the prefix and the ft_print_hex_lower function to print
 * the address in hexadecimal format.
 *
 * Return: The total number of characters printed.
 *         If an error occurs during printing, the function returns -1.
 */
int	ft_print_pointer(void *p)
{
	int				count;
	uintptr_t		num;
	int				check;

	if (!p)
		return (ft_print_str("(nil)"));
	num = (uintptr_t)p;
	count = 0;
	check = ft_print_str("0x");
	if (check == -1)
		return (-1);
	count += check;
	check = ft_print_hex_lower(num);
	if (check == -1)
		return (-1);
	count += check;
	return (count);
}
