#include "main.h"

/**
 * print_chessboard - printsthe chess board
 * @a: pieces to print
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int c, b;

	for (b = 0; b < 8; b++)
	{
		_putchar(a[c][b]);
	}
	_putchar('\n');
}
