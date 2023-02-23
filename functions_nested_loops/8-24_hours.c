#include "main.h"
#include <stdio.h>

/**
 *jack_bauer - print every minute of day 
 *
 *@lg - print hour print minute
 *
 */

void jack_bauer(void)
{
	int l;
	int g;

	for (l = 0; l <= 23; l++)
	{
		for (g = 0; g <= 59; g++)
		{	
		_putchar((l / 10) + '0');
		_putchar((l % 10) + '0');
		_putchar(':');
		_putchar((g / 10) + '0');
		_putchar((g % 10) + '0');
		_putchar('\n');
		}
	}
}
