#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_numbers(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
}

void print_delim(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				print_numbers(i, j, k);
				if (!(i == '7' && j == '8' && k == '9'))
					print_delim();
				k++;
			}
			j++;
			k = j + 1;
		}
		j = i + 1;
		i++;
	}
}

int main ()
{
	ft_print_comb();
	ft_putchar('\n');
	return 0;
}