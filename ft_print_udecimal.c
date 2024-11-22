/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:06:50 by duha              #+#    #+#             */
/*   Updated: 2024/11/22 02:29:48 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_udecimal(unsigned int num)
{
	int	count;

	count = 0;
	if (num > 9)
		count += ft_print_udecimal(num / 10);
	ft_print_char((num % 10) + '0');
	count++;
	return (count);
}
