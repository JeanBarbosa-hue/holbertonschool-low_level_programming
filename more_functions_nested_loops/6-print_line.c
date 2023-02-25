#include "main.h"
#include <stdio.h>

/**
 * print_line - print line
 *
 * @n: variable
 *
 *Return: straight line
 */

void print_line(int n)
{
	int f;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (f = 1; f <= n; f++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
