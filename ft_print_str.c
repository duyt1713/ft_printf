/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:01:00 by duha              #+#    #+#             */
/*   Updated: 2024/11/26 00:21:15 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	count;
	int	check;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		check = ft_print_char(*str);
		if (check == -1)
			return (-1);
		count += check;
		str++;
	}
	return (count);
}
