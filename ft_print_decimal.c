/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:26:21 by duha              #+#    #+#             */
/*   Updated: 2024/11/25 23:52:20 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
