#include "main.h"
#include <stdio.h>

/**
* print_alphabet - print alphabet
*
*/

void print_alphabet(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		_putchar(t);
	}
	putchar('\n');
}
