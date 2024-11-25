/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:59:25 by duha              #+#    #+#             */
/*   Updated: 2024/11/26 00:03:22 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_upper(uintptr_t num)
{
	const char	*hex;
	int			count;
	int			check;

	hex = "0123456789ABCDEF";
	count = 0;
	if (num >= 16)
	{
		check = ft_print_hex_upper(num / 16);
		if (check == -1)
			return (-1);
		count += check;
	}
	check = ft_print_char(hex[num % 16]);
	if (check == -1)
		return (-1);
	return (count + 1);
}
