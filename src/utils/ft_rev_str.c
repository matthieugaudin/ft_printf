/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:30:11 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/25 17:56:46 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/utils.h"

char	*ft_rev_str(char *str, int start)
{
	int		j;
	char	tmp;

	j = ft_strlen(str) - 1;
	while (start < j)
	{
		tmp = str[start];
		str[start] = str[j];
		str[j] = tmp;
		start++;
		j--;
	}
	return (str);
}
