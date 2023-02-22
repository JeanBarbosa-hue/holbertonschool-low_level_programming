#include "main.h"
#include <stdio.h>

/**
* print_alphabet - print alphabet_x10
*
*/

void print_alphabet_x10(void)
{
	char k;
	char j;
	
	for (j = '0'; j <= '9'; j++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
	_putchar('\n');
	}

}
