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

int ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power == 0 && nb == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	else
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}

int main ()
{
	int num;
	num = ft_iterative_power(10, 0);
	ft_putnbr(num);
	return 0;
}
