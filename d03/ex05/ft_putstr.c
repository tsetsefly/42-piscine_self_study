#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
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

int main ()
{
	char *str;

	str = "Wahoo!";
	ft_putstr(str);
	ft_putchar('\n');
	return 0;
}