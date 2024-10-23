/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:58:30 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/23 11:22:47 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_handle_format(const char *format, va_list args)
{
	if (*format == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
	}
	else if (*format == 's')
	{
		ft_putstr(va_arg(args, char *));
	}
	else if (*format == 'p')
	{
		ft_putptr(va_arg(args, void *));
	}
	else if (*format == 'd' || *format == 'i')
	{
		
	}
	else if (*format == 'u')
	{
		// TO DO
	}
	else if (*format == 'x')
	{
		// TO DO
	}
	else if (*format == 'X')
	{
		// TO DO
	}
	else if (*format == '%')
	{
		ft_putchar_fd('%', 1);
	}
}

int	ft_printf(const char *format, ...)
{
    int     printed_len;
    va_list args;

    va_start(args, format);
	printed_len = 0;
    while (*format)
    {
        if (*format == '%' && *(format + 1))
        {
            ft_handle_format(format + 1, args);
			format++;
        }
        else
        {
            ft_putchar_fd(*format, 1);
        }
		printed_len++;
        format++;
    }
	va_end(args);
	return (printed_len);
}

int main(void)
{
	char *str = "test";
	ft_printf("%p", NULL);
	ft_printf("%p", str);
	ft_printf("%p", str + 1);
}