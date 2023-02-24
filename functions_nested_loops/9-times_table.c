#include "main.h"
#include <stdio.h>

/**
 * times_tables - 
 *
 * @d:
 *
 */

void times_table(void)
{
	int d;
	int c;

	for (d = '0'; d <= '9'; c++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (c = '1'; c <= '9'; c++)
		{
			 (d * c);

			if ((d / 10) < 0)
			{
				_putchar((d / 10) + '0');
			}

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			else
			{
				_putchar(' ');
			}

		}

		_putchar('\n');
	}
	
}
