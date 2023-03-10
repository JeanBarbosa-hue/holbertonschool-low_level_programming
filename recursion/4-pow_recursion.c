#include "main.h"

/**
 * _pow_recursion - x to the power of y
 *
 * @x: variable
 * @y: variable
 *
 * Return: value of power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	if (x == 0)
	{
		return (0);
	}
		return (x * _pow_recursion(x, y - 1));
}
