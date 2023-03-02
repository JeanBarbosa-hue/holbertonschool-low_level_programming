#include "main.h"
#include <string.h>

/**
 * _strcmp - compare strings
 *
 *@s1: pointer
 *@s2: pointer
 *
 */

int _strcmp(char *s1, char *s2)
{
	while(*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}

		s1++;
		s2++;
	}

		if (*s1 || *s2)
		{
			return (0);
		}

		return (1);
}
