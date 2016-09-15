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

unsigned int ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int src_len;

	src_len = ft_strlen(src);
	i = 0;
	while (i < src_len && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
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
	ft_putnbr(ft_strlcpy(str, str2, size));
	ft_putchar('\n');
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