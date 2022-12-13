
#include "printf.h"

void ft_hexa(unsigned long int nb,char *h, int *cnt)
{
    if (nb >= 16)
        ft_hexa((nb / 16), h, cnt);
    *cnt += ft_putchar(h[nb % 16]);
}