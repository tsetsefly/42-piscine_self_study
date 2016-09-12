#include <unistd.h>

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

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}

int main ()
{
	char str[] = "aBCDeFGHi";

	ft_putstr(ft_strupcase(str));
	return (0);
}