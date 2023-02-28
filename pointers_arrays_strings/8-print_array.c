#include "main.h"
#include <stdio.h>

/**
 * print_array - print element of array
 *
 *@a: pointer
 *@n: variable
 *
 */

void print_array(int *a, int n)
{
	int r;

		for (r = 0; r < (n - 1); r++)
		{
			printf("%d, ", a[r]);
		}

		if (r == (n - 1))
		{
			printf("%d", a[n - 1]);
		}

		putchar('\n');
}
