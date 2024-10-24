#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


#include <stdio.h>



int ft_print_c(int c);
int ft_print_p(unsigned long nb);
int ft_print_s(char *s);
int ft_putchar(char c);
int ft_putnbr_hexa(unsigned long nb, char format);
int ft_putnbr(int nb);

#endif