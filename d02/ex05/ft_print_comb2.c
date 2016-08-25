#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_digits(int num)
{
	int a;
	int b;

	a = num / 10;
	b = num % 10;
	ft_putchar(a + 48);
	ft_putchar(b + 48);
}

void ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		while (j <= 99)
		{
			print_digits(i);
			ft_putchar(' ');
			print_digits(j);
			if (!(i == 98 && j == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

int main ()
{
	ft_print_comb2();
	ft_putchar('\n');
	return 0;
}