/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:19:58 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/25 17:46:09 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_print_hexa(unsigned long nb, char c)
{
	char	*adresse;
	int		len;

	if (!nb)
	{
		ft_putstr("(nil)");
		return (5);
	}
	else
	{
		if (c == 'x')
			adresse = ft_put_hexa(nb, "0123456789abcdef", 0);
		else if (c == 'X')
			adresse = ft_put_hexa(nb, "0123456789ABCDEF", 0);
		else if (c == 'p')
			adresse = ft_put_hexa(nb, "0123456789abcdef", 1);
		len = ft_strlen(adresse);
		free(adresse);
		return (len);
	}
}
