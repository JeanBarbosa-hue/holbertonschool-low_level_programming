#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string reverse
 *
 *@s: variable
 *
 */

void print_rev(char *s)
{
	int a = 0;
	int t, n;

		for (t = 0; s[t] != '\0'; t++)
		{
			a++;
		}

			for (n = (a - 1); n >= 0; n--)
			{
				putchar(s[n]);
			}

			putchar('\n');
}
