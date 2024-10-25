/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:52:30 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/25 17:54:09 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/utils.h"

static void	ft_fill_hexa(size_t i, unsigned long nb, char *f, char *hexa)
{
	while (nb)
	{
		hexa[i++] = f[nb % 16];
		nb /= 16;
	}
	hexa[i] = 0;
}

char	*ft_put_hexa(unsigned long nb, char *format, int is_p)
{
	char			*hexa;
	size_t			i;

	hexa = (char *)malloc(sizeof(char) * 19);
	if (!hexa)
	{
		return (NULL);
	}
	if (is_p)
	{
		i = ft_strlcpy(hexa, "0x", 3);
		ft_fill_hexa(i, nb, format, hexa);
		ft_putstr(ft_rev_str(hexa, i));
	}
	else
	{
		i = 0;
		ft_fill_hexa(i, nb, format, hexa);
		ft_putstr(ft_rev_str(hexa, i));
	}
	return (hexa);
}
