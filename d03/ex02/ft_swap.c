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
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main ()
{
	int a;
	int b;
	
	a = 2;
	b = 4;
	ft_putstr("a1 = ");
	ft_putnbr(a);
	ft_putstr(", b1 = ");
	ft_putnbr(b);
	ft_putchar('\n');
	ft_swap(&a, &b);
	ft_putstr("a2 = ");
	ft_putnbr(a);
	ft_putstr(", b2 = ");
	ft_putnbr(b);
	ft_putchar('\n');
	return 0;
}