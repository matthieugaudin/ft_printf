/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:29:13 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/25 17:40:21 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "utils.h"

int	ft_printf(const char *format, ...);
int	ft_print_c(int c);
int	ft_print_d_i(int nb);
int	ft_print_hexa(unsigned long nb, char c);
int	ft_print_percent(char c);
int	ft_print_s(char *s);
int	ft_print_u(unsigned int nb);
int	ft_print_x(unsigned long nb);
int	ft_print_X(unsigned long nb);

#endif