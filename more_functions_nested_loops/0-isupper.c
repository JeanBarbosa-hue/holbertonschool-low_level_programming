#include "main.h"
#include <stdio.h>

/**
 * _isupper - check uppercase char
 *
 *@c: variable to checked
 *
 *Return: 1  when uppercase char 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
