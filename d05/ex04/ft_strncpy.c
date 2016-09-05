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

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main ()
{
	char str[] = "wahoo!!!";
	char str2[] = "WAHOO!!!";
	int size = 5;

	ft_putstr("str = ");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr("str2 = ");
	ft_putstr(str2);
	ft_putchar('\n');
	ft_strncpy(str, str2, size);
	// strncpy(str, str2, size);
	// str[size] = '\0'; // native function doesn't add the '\0'
	ft_putstr("str = ");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr("str2 = ");
	ft_putstr(str2);
	ft_putchar('\n');
	return 0;
}