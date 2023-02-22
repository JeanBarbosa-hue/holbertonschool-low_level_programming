#include "main.h"
#include <stdio.h>

/**
* _islower - checks for lowercase char
*
* @c: the character to be checked
*
* Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
