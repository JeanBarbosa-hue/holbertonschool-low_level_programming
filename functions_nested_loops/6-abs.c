#include "main.h"
#include <stdio.h>

/**
 * _abs - computes absolute value of integer
 *
 *@e: variable to be checked
 *
 * Return: absolute value
 */

int _abs(int e)
{
	if (e < 0)
	{
		return (-e);
	}

	return (e);
}
