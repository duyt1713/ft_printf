/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:06:54 by duha              #+#    #+#             */
/*   Updated: 2024/11/21 02:11:47 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(const int num)
{
	const char	*hex;
	long		conv;
	int			count;

	hex = "0123456789abcdef";
	conv = num;
	count = 0;
	if (num < 0)
	{
		ft_print_char('-');
		conv = -conv;
		count++;
	}
	if (conv >= 16)
		count += ft_print_hex(conv / 16);
	ft_print_char(hex[conv % 16]);
	count++;
	return (count);
}
