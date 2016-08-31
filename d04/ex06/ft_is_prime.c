#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_putnbr(int nb)
{
	long num;

	num = nb;
	if (num < 0)
	{
		num *= -1;
		ft_putchar('-');
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + 48);
	return (num);
}

int ft_is_prime(int nb)
{
	int div;

	div = nb / 2;
	if (nb < 3)
		return (0);
	else
	{
		while (div > 1)
		{
			if (nb % div == 0)
				return (0);
			div--;
		}
	}
	return (1);
}

int main ()
{
	int result;

	result = ft_is_prime(127);
	ft_putnbr(result);
	return 0;
}