/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_HEX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:59:25 by duha              #+#    #+#             */
/*   Updated: 2024/11/22 00:03:19 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_HEX(const unsigned int num)
{
	const char	*HEX;
	long		conv;
	int			count;

	HEX = "0123456789ABCDEF";
	conv = num;
	count = 0;
	if (conv >= 16)
		count += ft_print_HEX(conv / 16);
	ft_print_char(HEX[conv % 16]);
	count++;
	return (count);
}
