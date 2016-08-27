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

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_ultimate_div_mod(int *a, int *b)
{
	int a2;
	int b2;

	a2 = *a;
	b2 = *b;
	*a = a2 / b2;
	*b = a2 % b2;
}

int main ()
{
	int a;
	int b;

	a = 100;
	b = 7;
	ft_putstr("a = ");
	ft_putnbr(a);
	ft_putstr(", b = ");
	ft_putnbr(b);
	ft_putchar('\n');
	ft_ultimate_div_mod(&a, &b);
	ft_putstr("div(a) = ");
	ft_putnbr(a);
	ft_putstr(", mod(b) = ");
	ft_putnbr(b);
	ft_putchar('\n');
	return 0;
}