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
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main ()
{
	char str[] = "wahoo!!!";
	char str2[] = "WAHOO!!!";

	ft_putstr("str = ");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr("str2 = ");
	ft_putstr(str2);
	ft_putchar('\n');
	ft_strcpy(str, str2);
	// strcpy(str, str2);
	ft_putstr("str = ");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr("str2 = ");
	ft_putstr(str2);
	ft_putchar('\n');
	return 0;
}