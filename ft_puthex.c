/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:06:54 by duha              #+#    #+#             */
/*   Updated: 2024/11/20 22:41:17 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(const int num)
{
	const char	*hex;
	long		conv;

	hex = "0123456789abcdef";
	conv = num;
	if (num < 0)
	{
		ft_putchar('-');
		conv = -conv;
	}
	if (conv >= 16)
		ft_puthex(conv / 16);
	ft_putchar(hex[conv % 16]);
}
