/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:19:58 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/31 18:14:05 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_print_x(unsigned int nb, char c)
{
	char	*adress;
	int		len;

	adress = NULL;
	if (nb == 0)
	{
		return (ft_putchar('0'));
	}
	else
	{
		if (c == 'x')
			adress = ft_put_x(nb, "0123456789abcdef");
		else if (c == 'X')
			adress = ft_put_x(nb, "0123456789ABCDEF");
		if (!adress)
		{
			free(adress);
			return (0);
		}
		len = ft_strlen(adress);
		free(adress);
		return (len);
	}
}
