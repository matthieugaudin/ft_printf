/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:06:25 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/31 18:17:55 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/utils.h"

char	*ft_put_p(void *ptr, char *format)
{
	char			*hexa;
	char			*res;
	size_t			i;
	unsigned long	nb;

	res = NULL;
	hexa = (char *)malloc(sizeof(char) * 19);
	if (!hexa)
		return (NULL);
	i = ft_strlcpy(hexa, "0x", 3);
	nb = (unsigned long)ptr;
	while (nb)
	{
		hexa[i++] = format[nb % 16];
		nb /= 16;
	}
	hexa[i] = 0;
	res = ft_rev_str(hexa, 2);
	ft_putstr(res);
	return (res);
}
