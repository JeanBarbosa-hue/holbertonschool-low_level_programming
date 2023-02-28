#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - print even num
 *
 *@str: pointer
 *
 */

void puts2(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		if (p % 2 == 0)
		{
			putchar(str[p]);
		}
	}

	putchar('\n');
}
