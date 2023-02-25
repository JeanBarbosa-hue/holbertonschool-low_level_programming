#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 0 to 9
 *
 * @a: variable
 *
 * Return: 0 to 9 being printed
 */

void print_numbers(void)
{
	int a;

		for (a = 0; a <= 9; a++)
		{
			putchar(a + '0');
		}

		putchar('\n');
}
