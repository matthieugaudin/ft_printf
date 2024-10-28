/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:19:58 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/27 18:42:21 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_print_x(unsigned int nb, char c)
{
	char	*adresse;
	int		len;

	if (nb == 0)
	{
		return (ft_putchar('0'));
	}
	else
	{
		if (c == 'x')
			adresse = ft_put_x(nb, "0123456789abcdef");
		else if (c == 'X')
			adresse = ft_put_x(nb, "0123456789ABCDEF");
		if (!adresse)
		{
			free(adresse);
			return (0);
		}
		len = ft_strlen(adresse);
		free(adresse);
		return (len);
	}
}
