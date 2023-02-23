#include "main.h"
#include <stdio.h>

/**
* _islower - checks for lowercase char
*
* @c: the character to be checked
*
* Return - Always 1 (Success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
