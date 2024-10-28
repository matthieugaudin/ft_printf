/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:29:13 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/27 17:25:37 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "utils.h"

int	ft_printf(const char *format, ...);
int	ft_print_c(int c);
int	ft_print_d_i(int nb);
int	ft_print_p(void *ptr);
int	ft_print_x(unsigned int nb, char c);
int	ft_print_percent(char c);
int	ft_print_s(char *s);
int	ft_print_u(unsigned int nb);

#endif