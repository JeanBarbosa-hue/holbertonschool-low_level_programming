#include "main.h"

/**
 * _strlen_recursion - string length
 *
 * @s: pointer
 *
 * Return: total length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (_strlen_recursion(s + 1) + 1);
}
