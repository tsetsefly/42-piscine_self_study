#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main ()
{
	char c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
	return 0;
}