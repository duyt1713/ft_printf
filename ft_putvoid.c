/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:29:51 by duha              #+#    #+#             */
/*   Updated: 2024/11/20 22:41:02 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putvoid(const void *p)
{
	unsigned long	conv;

	conv = (unsigned long)p;
	ft_putstr("0x");
	ft_puthex(conv);
}
