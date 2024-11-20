/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:26:21 by duha              #+#    #+#             */
/*   Updated: 2024/11/20 22:41:31 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putdec(const int num)
{
	long	conv;

	conv = num;
	if (conv < 0)
	{
		ft_putchar('-');
		conv = -conv;
	}
	if (conv > 9)
		ft_putdec(conv / 10);
	ft_putchar((conv % 10) + '0');
}
