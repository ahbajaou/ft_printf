
#include "printf.h"

int	ft_count(long long n)
{
	long int	nb;
	long int	i;
    int cnt;

	nb = n;
	i = 1;
    cnt = 0;
	while (nb > 9)
	{
		nb = nb / 10;
		i = i * 10;
	}
	while (i > 9)
	{
		cnt += ft_putchar(n / i + '0');
		n = n - (n / i) * i;
		i = i / 10;
	}
	cnt += ft_putchar(n + '0');
    return (cnt);
}

int	ft_putnbr(long long n)
{
	int	nb;
	int	min;
    int cnt;

	nb = n;
    cnt = 0;
	min = -2147483648;
	if (nb == min)
	{
		cnt += ft_putstr("-2147483648");
		return (cnt);
	}
	else
	{
		if (nb < 0)
		{
			cnt += ft_putchar('-');
			nb *= -1;
		}
	}
	ft_count(nb);
    return (cnt);
}