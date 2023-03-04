#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print chessboard
 *
 * @a: pointer
 */

void print_chessboard(char (*a)[8])
{
	int b, d;

	for (b = 0; b < 8; b++)
	{
		for (d = 0; d < 8; d++)
		{
			putchar(a[b][d]);
		}

		putchar('\n');
	}
}
