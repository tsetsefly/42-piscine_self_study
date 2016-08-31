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

int ft_sqrt(int nb)
{
	int root;

	root = nb / 2;
	if (nb <= 0)
		return (0);
	else
	{
		while (root > 0)
		{
			if (root * root == nb)
				return (root);
			root--;
		}
	}
	return (0);
}

int main()
{
	int result;

	result = ft_sqrt(100);
	ft_putnbr(result);
	return 0;
}