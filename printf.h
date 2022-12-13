#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
#include <stdarg.h>

int	ft_printf(const char *str, ...);
int ft_putstr(const char *s);
int	ft_putchar(char c);
int	ft_putnbr(long long n);
void ft_hexa(unsigned long int nb,char *h, int *cnt);

#endif