/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:06:50 by duha              #+#    #+#             */
/*   Updated: 2024/11/26 02:25:04 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_print_udecimal - Writes an unsigned integer to the standard output.
 *
 * @num: The unsigned integer to be written.
 *
 * This function writes the given unsigned integer to the standard output
 * (file descriptor 1). It recursively processes each digit of the number
 * by dividing the number by 10 and printing the remainder. The function
 * uses the ft_print_char function to print individual characters.
 *
 * Return: The total number of characters printed.
 *         If an error occurs during printing, the function returns -1.
 */
int	ft_print_udecimal(unsigned int num)
{
	int	count;
	int	check;

	count = 0;
	if (num > 9)
	{
		check = ft_print_udecimal(num / 10);
		if (check == -1)
			return (-1);
		count += check;
	}
	check = ft_print_char((num % 10) + '0');
	if (check == -1)
		return (-1);
	return (count + 1);
}
