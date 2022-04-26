#include "main.h"
/**
 * print_chessboard - main function
 * @a: 2d array of chars
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])

{
	int i, j;

	for (i = 0; i < 8; j++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
