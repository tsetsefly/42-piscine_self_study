#include <unistd.h>
#include <string.h>

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
		num *= -1;
		ft_putchar('-');
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main ()
{
	char *s1;
	char *s2;

	s1 = "";
	s2 = "bananaaa";
	ft_putstr("ft_strcmp = ");
	ft_putnbr(ft_strcmp(s1, s2));
	ft_putchar('\n');
	ft_putstr("   strcmp = ");
	ft_putnbr(strcmp(s1, s2));
	ft_putchar('\n');
	return (0);
}