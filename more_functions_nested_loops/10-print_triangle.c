#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print triangle
 *
 * @size: size for triangle
 *
 * return: triangle shape
 */

void print_triangle(int size)
{
	int p, o, t;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (o = 0; o <= (size - 1); o++)
		{
			for (p = 0; p < (size - 1) - o; p++)
			{
				putchar(' ');
			}
			for (t = 0; t <= o; t++)
			{
				putchar('#');
			}

			putchar('\n');
		}
	}
}
