/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:29:51 by duha              #+#    #+#             */
/*   Updated: 2024/11/21 01:50:33 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(const void *p)
{
	unsigned long	conv;

	conv = (unsigned long)p;
	ft_print_str("0x");
	ft_print_hex(conv);
}
// int main(void)
// {
// 	const void *p;
// 	printf("%p", p);
// }
