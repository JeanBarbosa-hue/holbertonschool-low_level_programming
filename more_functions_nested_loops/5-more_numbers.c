#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print more numbers
 *
 *
 */
void more_numbers(void)
{
	int i, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}

		putchar('\n');
	}
}
