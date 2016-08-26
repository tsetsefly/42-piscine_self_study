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
		num *= -1;
		ft_putchar('-');
	}
	if (num > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
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