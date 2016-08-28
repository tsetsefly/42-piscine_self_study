#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + 48);
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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_atoi(char *str)
{
	int i;
	int num;
	int neg;

	i = 0;
	num = 0;
	neg = 1;
	while (str[i] < 33)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * neg);
}

int main ()
{
	int num;
	char *str;

	str = "   -123";
	num = ft_atoi(str);
	ft_putstr("ft_atoi = ");
	ft_putnbr(num);
	ft_putchar('\n');
	num = atoi(str);
	ft_putstr("   atoi = ");
	ft_putnbr(num);
	ft_putchar('\n');
	return 0;
}
