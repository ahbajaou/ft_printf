
#include "printf.h"

int ft_putstr(const char *s)
{
	size_t	i;
	size_t cnt;

	i = 0;
	cnt = 0;
	if (!s)
		s = "(null)";
	while (s[i] != '\0')
	{
		cnt += ft_putchar(s[i]);
		i++;
	}
    return (cnt);
}