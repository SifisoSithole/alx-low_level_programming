#include "main.h"

/**
 * print_chessboard - This function prints the chessboard
 * @board: Chessboard
 */
void print_chessboard(char board[8][8])
{
	int x;
	int y;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
			_putchar(board[y][x]);
		_putchar('\n');
	}
}
