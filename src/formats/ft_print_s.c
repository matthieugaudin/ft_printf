/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:13:51 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/27 15:49:34 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_print_s(char *s)
{
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	else
	{
		ft_putstr(s);
		return (ft_strlen(s));
	}
}
