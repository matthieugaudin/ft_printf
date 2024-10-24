/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:24:49 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/24 19:35:50 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_hexa(unsigned long nb, char format)
{
	char			*base;
	char			*hexa;
	unsigned long	tmp;
	size_t			i;

	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	hexa[0] = '0';
	hexa[1] = 'x';
	i = 2;
	while (nb)
	{
		tmp = nb % 16;
		hexa[i++] = base[tmp];
		nb /= 16;
	}
	return (i);
}