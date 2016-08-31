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

int ft_fibonacci(int index)
{
	int num;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		num = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (num);
}

int main ()
{
	int num;

	num = ft_fibonacci(7);
	ft_putnbr(num);
	return 0;
}