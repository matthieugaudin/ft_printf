/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:23:11 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/23 11:03:13 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    printf("%c\n", 'o');
    printf("%c\n", 42);
    printf("%c\n", 0);
    // printf("%c\n", NULL); format ‘%c’ expects argument of type ‘int’, but argument 2 has type ‘void *’
    printf("%c\n", '\0');
    printf("%s\n", "je suis une string");
    printf("%s\n", "");
    // printf("%s\n", NULL); format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘void *’

    int *ptr = NULL;
    char *str = "je suis une string";
    printf("%p\n", ptr);
    printf("%p\n", (void *)ptr);
    printf("%p\n", str);
    printf("%p\n", str + 1);
    printf("%d\n", 42);
    printf("%d\n", -42);
    printf("%u\n", 42);
    printf("%u\n", -42);
    printf("%u\n", (char)-42);
    printf("%u\n", '*');

    printf("%x\n", -42);
    printf("%X\n", -42);
}