/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:32:09 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/25 17:57:32 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/utils.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	res;

	res = ft_strlen(src);
	i = 0;
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > res)
		dst[i] = 0;
	else
		dst[i - 1] = 0;
	return (res);
}
