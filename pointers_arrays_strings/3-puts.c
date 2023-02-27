#include "main.h"
#include <stdio.h>

/**
 * _puts - print string
 *
 * @str: variable
 *
 */

void _puts(char *str)
{
	int e;

		for (e = 0; str[e] != '\0'; e++)
		{
			putchar(str[e]);
		}

		putchar('\n');
}
