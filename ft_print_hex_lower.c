/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:06:54 by duha              #+#    #+#             */
/*   Updated: 2024/11/22 02:50:44 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

int	ft_print_hex_lower(uintptr_t num)
{
	const char	*hex;
	int			count;

	hex = "0123456789abcdef";
	count = 0;
	if (num >= 16)
		count += ft_print_hex_lower(num / 16);
	ft_print_char(hex[num % 16]);
	count++;
	return (count);
}
