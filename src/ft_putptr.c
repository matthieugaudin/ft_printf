/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:19:58 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/23 11:29:02 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int ft_ptrlen(void *ptr)
{}

void	ft_putptr(void *ptr)
{
	if (!ptr)
		write(1, "(null)", 6);
    else
	    write(1, ptr, ft_ptrlen(ptr));
}
