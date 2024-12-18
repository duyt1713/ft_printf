/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:59:37 by duha              #+#    #+#             */
/*   Updated: 2024/11/26 02:26:07 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>

/* Main function */

int	ft_printf(const char *format, ...);

/* Utility functions*/

int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_pointer(void *p);
int	ft_print_udecimal(unsigned int num);
int	ft_print_decimal(int num);
int	ft_print_hex_lower(uintptr_t num);
int	ft_print_hex_upper(uintptr_t num);

#endif
