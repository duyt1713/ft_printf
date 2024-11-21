/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:06:50 by duha              #+#    #+#             */
/*   Updated: 2024/11/21 10:10:06 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_udecimal(const unsigned int num)
{
	unsigned int	conv;
	int				count;

	conv = num;
	count = 0;
	if (conv > 9)
		count += ft_print_udecimal(conv / 10);
	ft_print_char((conv % 10) + '0');
	count++;
	return (count);
}
