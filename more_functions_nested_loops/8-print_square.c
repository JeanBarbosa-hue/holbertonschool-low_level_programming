#include "main.h"
#include <stdio.h>

/**
 *  print_square - print square
 *
 * @size: size of square
 *
 *  return: square
 */

void print_square(int size)
{
	int d, r;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (d = 1; d <= size; d++)
		{
			putchar('#');

			for (r = 2; r <= size; r++)
			{
				putchar('#');
			}

			putchar('\n');
		}
	}
}
