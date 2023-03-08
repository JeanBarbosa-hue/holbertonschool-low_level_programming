#include "main.h"
#include <stdio.h>

/**
* _islower - checks for lowercase char
*
* @c: the character to be checked
*
<<<<<<< HEAD
* Return - Always 1 (Success)
=======
* Return: 1 if c is lowercase, 0 otherwise
>>>>>>> 445317fa4cd647a60b9d9e477fb5bbeb2daad060
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
