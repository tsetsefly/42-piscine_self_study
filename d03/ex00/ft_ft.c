#include <unistd.h>

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

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main ()
{
	int i;

	i = 0;
	ft_ft(&i);
	ft_putnbr(i);
	return 0;
}