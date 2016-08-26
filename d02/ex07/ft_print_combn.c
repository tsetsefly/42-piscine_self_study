#include <unistd.h>
int g_counter = 0;

void ft_putchar(char c)
{
	write(1, &c, 1);
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

int max_num(int power)
{
	int i;
	int num;

	i = 0;
	num = 1;
	while (i < power)
	{
		num = num * 10;
		i++;
	}
	num--;
	return (num);
}

int digits(int num)
{
	int digits;

	digits = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num /= 10;
		digits++;
	}
	return (digits);
}

int check_num(int num_digits, int *print_array)
{
	int i;
	int j;
	int result;

	i = 0;
	result = 1;
	while (i < num_digits)
	{
		j = i + 1;
		while (j < num_digits)
		{
			if ((print_array[i] == print_array[j]) || (print_array[i] > print_array[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (result);
}

void print_digits(int num_digits, int print_num)
{
	int i;
	int start;
	int max;
	int print_array[10] = {0}; // technically cheating norminette, could create a function to fill array with 0s
	
	start = num_digits - digits(print_num);
	max = num_digits;
	while (print_num > 0)
	{
		print_array[num_digits - 1] = print_num % 10;
		print_num /= 10;
		num_digits--;
	}
	i = 0;
	if (check_num(max, print_array))
	{
		if (g_counter != 0)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		g_counter++;
		while (i < max)
		{
			ft_putnbr(print_array[i]);
			i++;
		}
	}
}

void ft_print_combn(int n)
{
	int i;
	int max;

	if (n < 1 || n > 9)
		ft_putstr("Error: invalid range, must be between 0 and 10 exclusive");
	else
	{
		max = max_num(n);
		i = 0;
		while (i <= max)
		{
			print_digits(n, i);
			i++;
		}	
	}
}

int main ()
{
	ft_print_combn(5);
	ft_putchar('\n');
	return 0;
}