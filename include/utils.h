/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:30:09 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/25 17:55:11 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_putchar(char c);
char	*ft_put_hexa(unsigned long nb, char *format, int is_p);
int		ft_putnbr(int nb);
size_t	ft_strlen(const char *s);
void	ft_putstr(char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_rev_str(char *str, int start);

#endif