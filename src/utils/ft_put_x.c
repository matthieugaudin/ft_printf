/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:52:30 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/27 17:58:03 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/utils.h"

char	*ft_put_x(unsigned int nb, char *format)
{
	char			*hexa;
	size_t			i;

	hexa = (char *)malloc(sizeof(char) * 19);
	if (!hexa)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (nb)
		{
			hexa[i++] = format[nb % 16];
			nb /= 16;
		}
		hexa[i] = 0;
		ft_putstr(ft_rev_str(hexa, 0));
	}
	return (hexa);
}
