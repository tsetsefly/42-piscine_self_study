# (N-) Eight Queens Puzzle

## Recursive Backtracking Algorithm

### Brute force recursion (vs. brute force enumeration)

1. **Termination condition:** if you reach row 9 (represented as row 8 because 0-ordered), will increment a global counter variable. Means that it has placed 8 valid queens on a board to reach that point. Send algorithm back at this point to search for additional solutions after the counter is incremented.

2. **Recusively placing the queens:** runs through the chessboard column-by-column and places queens in each column that don't conflict with columns before it. Can represent the chessboard in a 1-D array by ```array[col] = row``` where row is the row of the queen's placement. After finding a set of valid queens the algorithm will increment to the next column via ```current + 1```.

3. **Backtracking:** Incrementally building candidate solutions, abandoning partial candiates (therefore can only be applied to problems that have partial solutions). Also good for things like Sudoku and other constraint satisfaction problems.

4. **Depth-first order:** Traverses a search tree from the root down sub-tree by sub-tree. If its a valid solution it moves forward, otherwise it prunes the sub-tree.

**NOTE:** This solution doesn't account for rotationally symmetrical solutions. There are 12 rotational symmetrical solutions and 92 solutions otherwise.

## C Implementation

### Placing the queens
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

### Checking for validity of placed queens
```c
int check_board(int *board, int current)
{
	int i;

	i = 0;
	// iterates col-by-col to avoid conflicts within a column
	while (i < current)
	{
		// checks for conflicts between rows
		if (board[i] == board[current])
			return (0);
		// checks for conflicts along the diagonals of each queen
		if (board[i] == board[current] + (current - i) || board[i] == board[current] - (current - i))
			return (0);
		i++;
	}
	return (1);
}
```

## Elements of recursion

1. **Base case:** reduction of a larger problem into a simpler problem that can be solved directly (in this question, ```current == 8```. This stops the recursion.

2. **Recursive case:** the case that is executed into the base case is reached. Reduces the larger problem into one or more simpler problems. These cases call themselves.

3. You can have multiple recursive and base cases. Generally use parameters that bring the problem closer to a base case.

4. **Stack overflow:** occurs when you have infinite recursion. Literally means there is no more room for new frames on the stack.

## Resources

1. [Wikipedia](https://en.wikipedia.org/wiki/Eight_queens_puzzle)
2. [Algorithm interactive walkthrough](https://www.cs.usfca.edu/~galles/visualization/RecQueens.html)
3. [getchar() for in-program walkthrough](http://rabbit.eng.miami.edu/class/een218/getchar.html)
4. [Another C solution](http://www.ccodechamp.com/c-program-of-n-queens-problem-solution-using-backtracking/)
5. [Bitwise solution](http://www.ic-net.or.jp/home/takaken/e/queen/)
6. [Harvard CS notes on recursion](http://www.fas.harvard.edu/~cscie119/lectures/recursion.pdf)