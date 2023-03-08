#include "main.h"
#include <stdio.h>

/**
* _isalpha - checks for lowercase or uppercase char
*
* @c: the character to be checked
*
* Return: 1 if c is lowercase or uppercase, 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
