#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print diagonal line
 *
 * @n: variable
 *
 * return: diagonal line
 */

void print_diagonal(int n)
{
	int e, s;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (e = 1; e <= n; e++)
		{
			for (s = 1; s < e; s++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
