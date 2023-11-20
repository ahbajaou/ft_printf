
#include "printf.h"

static int ft_tprint(va_list ptr,char str)
{
    int cnt;

    cnt = 0;
    if (str == 'c')
        cnt += ft_putchar(va_arg(ptr, int));
    else if (str == 's')
        cnt += ft_putstr(va_arg(ptr, char *));
    else if (str == 'd' || str == 'i')
        cnt += ft_putnbr(va_arg(ptr, int));
    else if (str == 'x')
            ft_hexa(va_arg(ptr, unsigned int),"0123456789abcdef",&cnt);
    else if (str == 'X')
            ft_hexa(va_arg(ptr, unsigned int),"0123456789ABCDEF",&cnt);
    else if (str == 'u')
        cnt += ft_putnbr(va_arg(ptr,unsigned int));
    else if (str == 'p')
    {
        cnt += ft_putstr("0x");
            ft_hexa(va_arg(ptr,unsigned long int),"0123456789abcdef",&cnt);
    }
    else
        cnt += ft_putchar(str);

    return (cnt);
}
int	ft_printf(const char *str, ...)
{
    int i;
    int cnt;
    va_list ptr;

    i = 0;
    cnt = 0;
    va_start(ptr, str);
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            if (str[i] == '%' && str[i + 1] == '\0')
                return cnt;
            cnt += ft_tprint(ptr, str[i]);
        }
        else
           cnt += ft_putchar(str[i]);
        i++;
    }
    va_end(ptr);
    return (cnt); 
}
int main()
{

    ft_printf("%");
}