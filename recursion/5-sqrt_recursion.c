#include "main.h"

/**
 * find_root - find square root of n
 *
 * @n: n
 * @r: test this root
 *
 * Return: square root
 */

int find_root(int n, int r)
{
	if (r > n)
	return (-1);

	if (r * r == n)
	return (r);

	return (find_root(n, r + 1));
}

/**
 * _sqrt_recursion - square root
 *
 *@n: variable
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n / _sqrt_recursion(n / 2));
}
