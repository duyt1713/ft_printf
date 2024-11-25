/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:29:51 by duha              #+#    #+#             */
/*   Updated: 2024/11/26 00:09:21 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *p)
{
	int				count;
	uintptr_t		num;
	int				check;

	if (!p)
		return (ft_print_str("(nil)"));
	num = (uintptr_t)p;
	count = 0;
	check = ft_print_str("0x");
	if (check == -1)
		return (-1);
	count += check;
	check = ft_print_hex_lower(num);
	if (check == -1)
		return (-1);
	count += check;
	return (count);
}
