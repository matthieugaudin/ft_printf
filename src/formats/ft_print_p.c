/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:03:07 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/27 18:37:25 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_print_p(void *ptr)
{
	char	*adresse;
	int		len;

	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	else
	{
		adresse = ft_put_p(ptr, "0123456789abcdef");
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
