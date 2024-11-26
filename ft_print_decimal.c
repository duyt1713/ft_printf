/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:26:21 by duha              #+#    #+#             */
/*   Updated: 2024/11/26 02:24:00 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_print_decimal - Writes an integer to the standard output.
 *
 * @num: The integer to be written.
 *
 * This function writes the given integer to the standard output
 * (file descriptor 1). It handles negative numbers by printing a '-' sign
 * and converting the number to its positive equivalent. The function recursively
 * prints each digit of the number by dividing the number by 10 and printing
 * the remainder.
 *
 * Return: The total number of characters printed.
 *         If an error occurs during printing, the function returns -1.
 */
int	ft_print_decimal(int num)
{
	long	conv;
	int		count;
	int		check;

	conv = num;
	count = 0;
	if (conv < 0)
	{
		check = ft_print_char('-');
		if (check == -1)
			return (-1);
		conv = -conv;
		count++;
	}
	if (conv > 9)
	{
		check = ft_print_decimal(conv / 10);
		if (check == -1)
			return (-1);
		count += check;
	}
	check = ft_print_char((conv % 10) + '0');
	if (check == -1)
		return (-1);
	return (count + 1);
}
