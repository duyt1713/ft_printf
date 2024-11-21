/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:01:00 by duha              #+#    #+#             */
/*   Updated: 2024/11/21 01:48:27 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	const char	*p;

	p = str;
	while (*p)
		p++;
	return (p - str);
}

int	ft_print_str(const char *str)
{
	size_t	len;

	len = ft_strlen(str);
	write (1, str, len);
	return (len);
}
