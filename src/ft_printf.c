/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:58:30 by mgaudin           #+#    #+#             */
/*   Updated: 2024/11/05 18:28:54 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	ft_handle_format(const char *format, va_list args, int *len)
{
	if (*format == 'c')
		*len += ft_print_c(va_arg(args, int));
	else if (*format == 's')
		*len += ft_print_s(va_arg(args, char *));
	else if (*format == 'p')
		*len += ft_print_p(va_arg(args, void *));
	else if (*format == 'd' || *format == 'i')
		*len += ft_print_d_i(va_arg(args, int));
	else if (*format == 'u')
		*len += ft_print_u(va_arg(args, unsigned int));
	else if (*format == 'x')
		*len += ft_print_x(va_arg(args, unsigned int), 'x');
	else if (*format == 'X')
		*len += ft_print_x(va_arg(args, unsigned int), 'X');
	else if (*format == '%')
		*len += ft_print_percent('%');
}

int	ft_printf(const char *format, ...)
{
	int		printed_len;
	va_list	args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	printed_len = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			ft_handle_format(format + 1, args, &printed_len);
			format++;
		}
		else
		{
			ft_putchar(*format);
			printed_len++;
		}
		format++;
	}
	va_end(args);
	return (printed_len);
}
