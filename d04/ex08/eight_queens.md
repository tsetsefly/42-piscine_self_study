# Eight queens puzzle

## Recursive Backtracking Algorithm



## Program

```c
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
```

```c
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
```

## Resources

1. [Wikipedia](https://en.wikipedia.org/wiki/Eight_queens_puzzle)
2. [Algorithm interactive walkthrough](https://www.cs.usfca.edu/~galles/visualization/RecQueens.html)
3. [getchar() for in-program walkthrough](http://rabbit.eng.miami.edu/class/een218/getchar.html)
4. [Another C solution](http://www.ccodechamp.com/c-program-of-n-queens-problem-solution-using-backtracking/)
5. [Bitwise solution](http://www.ic-net.or.jp/home/takaken/e/queen/)
