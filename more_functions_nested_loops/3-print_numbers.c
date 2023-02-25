#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 to 9
 *
 *@r: variable to be checked
 */

void print_numbers(void)
{
	int r;

	for (r = 0; r <= 9; r++)
	{
		putchar(r + '0');
	}
	putchar('\n');
}
