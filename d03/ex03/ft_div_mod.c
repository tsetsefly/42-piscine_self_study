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

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main ()
{
	int a;
	int b;
	int div;
	int mod;

	a = 100;
	b = 7;
	ft_div_mod(a, b, &div, &mod);
	ft_putstr("a = ");
	ft_putnbr(a);
	ft_putstr(", b = ");
	ft_putnbr(b);
	ft_putchar('\n');
	ft_putstr("div = ");
	ft_putnbr(div);
	ft_putstr(", mod = ");
	ft_putnbr(mod);
	ft_putchar('\n');
	return 0;
}