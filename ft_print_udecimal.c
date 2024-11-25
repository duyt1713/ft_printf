/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:06:50 by duha              #+#    #+#             */
/*   Updated: 2024/11/26 00:22:59 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_udecimal(unsigned int num)
{
	int	count;
	int	check;

	count = 0;
	if (num > 9)
	{
		check = ft_print_udecimal(num / 10);
		if (check == -1)
			return (-1);
		count += check;
	}
	check = ft_print_char((num % 10) + '0');
	if (check == -1)
		return (-1);
	return (count + 1);
}
