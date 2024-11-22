/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:29:51 by duha              #+#    #+#             */
/*   Updated: 2024/11/22 02:52:18 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

int	ft_print_pointer(void *p)
{
	int				count;
	uintptr_t		num;

	if (!p)
		return (ft_print_str("(nil)"));
	num = (uintptr_t)p;
	count = 0;
	count += ft_print_str("0x");
	count += ft_print_hex_lower(num);
	return (count);
}
