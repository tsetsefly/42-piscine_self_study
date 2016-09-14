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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int main ()
{
	char dest[] = "abcdefg";
	char src[] = "hijklmnop";

	ft_putstr(ft_strcat(dest, src));
	ft_putchar('\n');
	return (0);
}