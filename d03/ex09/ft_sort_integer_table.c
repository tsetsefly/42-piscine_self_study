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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 1;
	while (i < size - 1)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

int main ()
{
	int i;
	int array[5] = {4, 2, 4, 6, -2};

	ft_sort_integer_table(array, 5);
	i = 0;
	while (i < 5)
	{
		ft_putnbr(array[i]);
		ft_putchar('\n');
		i++;
	}
	return 0;
}