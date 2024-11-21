/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:26:21 by duha              #+#    #+#             */
/*   Updated: 2024/11/21 01:12:49 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(const int num)
{
	long	conv;
	int		count;

	conv = num;
	count = 0;
	if (conv < 0)
	{
		ft_print_char('-');
		conv = -conv;
		count++;
	}
	if (conv > 9)
		count += ft_print_decimal(conv / 10);
	ft_print_char((conv % 10) + '0');
	count++;
	return (count);
}

int	main(void)
{
	int count;

	// Test with a positive number
	count = ft_print_decimal(12345);
	printf("\nCharacters printed: %d\n", count);

	// Test with a negative number
	count = ft_print_decimal(-6789);
	printf("\nCharacters printed: %d\n", count);

	// Test with zero
	count = ft_print_decimal(0);
	printf("\nCharacters printed: %d\n", count);

	// Test with a large number
	count = ft_print_decimal(2147483647);
	printf("\nCharacters printed: %d\n", count);

	// Test with a large negative number
	count = ft_print_decimal(-2147483648);
	printf("\nCharacters printed: %d\n", count);

	return (0);
}
