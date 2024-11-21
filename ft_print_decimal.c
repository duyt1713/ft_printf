/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:26:21 by duha              #+#    #+#             */
/*   Updated: 2024/11/21 23:49:26 by duha             ###   ########.fr       */
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
