/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:34:55 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/25 17:32:44 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	size_t	len;

	len = 0;
	if (nb <= 9)
	{
		len += ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		len += ft_print_u(nb / 10);
		len += ft_print_u(nb % 10);
	}
	return (len);
}
