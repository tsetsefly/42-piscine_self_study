#include <unistd.h>
int g_count = 0;

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

int ft_putnbr(int nb)
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
	ft_putchar(num % 10 + 48);
	return (num);
}

void print_board(int *board)
{
	int row;
	int col;

	col = 0;
	while (col < 8)
	{
		ft_putnbr(board[col]);
		ft_putchar(' ');
		col++;
	}
	ft_putstr("\n===============\n");
	row = 0;
	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			if (row == board[col])
				ft_putstr("X ");
			else
				ft_putstr("O ");
			col++;		
		}
		row++;
		ft_putchar('\n');
	}
	ft_putchar('\n');
}

int check_board(int *board, int current)
{
	int i;

	i = 0;
	while (i < current)
	{
		if (board[i] == board[current])
			return (0);
		if (board[i] == board[current] + (current - i) || board[i] == board[current] - (current - i))
			return (0);
		i++;
	}
	return (1);
}

void try_queens(int *board, int current)
{
	int i;

	if (current == 8)
	{
		print_board(board);
		g_count++;
		return ;
	}
	else
	{
		i = 0;
		while (i < 8)
		{	
			board[current] = i;
			if (check_board(board, current))
			{
				try_queens(board, current + 1);
			}
			i++;
		}
	}
}

int main()
{
	int board[8] = {-1, -1, -1, -1, -1, -1, -1, -1};

	try_queens(board, 0);
	ft_putstr("Total unique solutions = ");
	ft_putnbr(g_count);
	ft_putchar('\n');
	return 0;
}