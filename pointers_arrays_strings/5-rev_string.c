#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 *
 *@s: pointer
 *
 */

void rev_string(char *s)
{
	char temp;
	int i;
	int len = 0;

		while (s[len] != '\0')
		{
			len++;
		}

		for (i = len - 1; i >= len / 2; i--)
		{
			temp = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = temp;
		}

}
