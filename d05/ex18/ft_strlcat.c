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

void ft_putnbr(int nb)
{
	long num;

	num = nb;
	if (nb < 0)
	{
		num *= -1;
		ft_putchar('-');
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	long dest_len;
	long src_len;
	long i;
	long s;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	s = size;
	i = 0;	
	while ((i < s - dest_len - 1) && i < src_len)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	if (s - dest_len - 1 > 0)
		dest[i + dest_len] = '\0';
	if (s < dest_len)
		return (s + src_len);
	else
		return (dest_len + src_len);
}

int main ()
{
	char dest[] = "abcdefg";
	char src[] = "hijklmnop";

	ft_putnbr(ft_strlcat(dest, src, 16));
	ft_putchar('\n');
	return (0);
}
