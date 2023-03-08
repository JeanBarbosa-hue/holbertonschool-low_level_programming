#include "main.h"
#include <stdio.h>

/**
 *  _isdigit - checks for digit
 *
 * @c: variable to be checked
 *
 * Return: 1 if c is digit if not 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
