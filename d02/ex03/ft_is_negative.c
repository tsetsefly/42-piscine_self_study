#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int main ()
{
	int num;

	num = 0;
	ft_is_negative(num);
	ft_putchar('\n');
	return 0;
}