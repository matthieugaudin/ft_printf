/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:13:51 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/25 17:32:30 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_print_s(char *s)
{
	int	s_len;

	s_len = ft_strlen(s);
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	else
	{
		ft_putstr(s);
		return (s_len);
	}
}
