#include "main.h"

/**
 * factorial - return factorial number
 *
 * @n: variable
 *
 * Return: factorial number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
