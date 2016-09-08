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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < ft_strlen(str) - ft_strlen(to_find))
	{
		if (str[i] == to_find[0])
		{
			k = i;
			j = 0;
			while (str[k] == to_find[j])
			{
				j++;
				k++;
			}
			if (j == ft_strlen(to_find))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

int main ()
{
	char *str;
	char *to_find;

	str = "    the quick brown fox jumps over the lazy dog... ";
	to_find = "xf";
	ft_putstr("ft_strstr = ");
	ft_putstr(ft_strstr(str, to_find));
	ft_putchar('\n');
	ft_putstr("   strstr = ");
	ft_putstr(strstr(str, to_find));
	ft_putchar('\n');
	return 0;	
}