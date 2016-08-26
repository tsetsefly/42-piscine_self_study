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

// int *fill_array(int start, int num_digits, int print_num, int *array)
// {
// 	while ((start < num_digits) && (print_num > 9))
// 	{
// 		print_num /= 10;
// 		array[start] = print_num;
// 		start++;
// 	}
// 	array[start] = print_num % 10;
// 	return array;
// }

void print_digits(int num_digits, int print_num)
{
	int i;
	int start;
	int print_array[10] = {0}; // technically cheating norminette, could create a function to fill array with 0s
	
	start = num_digits - digits(print_num);
	// print_array = fill_array(start, num_digits, print_num, print_array);
	while ((start < num_digits) && (print_num > 9))
	{
		print_num /= 10;
		print_array[start] = print_num;
		start++;
	}
	print_array[start] = print_num % 10;
	i = 0;
	while (i < num_digits)
	{
		ft_putnbr(print_array[i]);
		i++;
	}
	ft_putchar('\n');
}

void ft_print_combn(int n)
{
	int i;
	int max;

	max = max_num(n);
	i = 0;
	while (i <= max)
	{
		print_digits(n, i);
		// ft_putnbr(digits(i));
		// ft_putchar('\n');
		i++;
	}
}

int main ()
{
	ft_print_combn(2);
	ft_putchar('\n');
	return 0;
}