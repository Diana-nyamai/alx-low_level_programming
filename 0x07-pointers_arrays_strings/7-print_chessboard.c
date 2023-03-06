#include "main.h"

/**
 * print_chessboard - check main
 * @a: input
 * Description: function chess board
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i == 0 || i == 1 || i == 6 || i == 7)
				_putchar(a[i][j]);
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
