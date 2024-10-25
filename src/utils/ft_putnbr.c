/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:33:54 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/25 18:00:33 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/utils.h"

int	ft_putnbr(int nb)
{
	size_t	len;

	len = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
		len += ft_putnbr(nb);
	}
	else if (nb <= 9 && nb >= 0)
	{
		len += ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	return (len);
}
