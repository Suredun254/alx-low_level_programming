#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int ind1, ind2;

	for (ind1 = 0; a[ind1][7]; ind1++)
	{
		for (ind2 = 0; ind2 < 8; ind2++)
			_putchar(a[ind1][ind2]);

		_putchar('\n');
	}
}
