/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:59:25 by duha              #+#    #+#             */
/*   Updated: 2024/11/22 02:50:27 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

int	ft_print_hex_upper(uintptr_t num)
{
	const char	*hex;
	int			count;

	hex = "0123456789ABCDEF";
	count = 0;
	if (num >= 16)
		count += ft_print_hex_upper(num / 16);
	ft_print_char(hex[num % 16]);
	count++;
	return (count);
}
