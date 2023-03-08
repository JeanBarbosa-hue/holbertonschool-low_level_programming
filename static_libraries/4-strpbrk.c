#include "main.h"

/**
 * _strpbrk - searches string for any sets of bytes
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: null
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
	    b = 0;
	while (accept[b])
	{
		if (s[a] == accept[b])
		{
		    s += a;
		return (s);
		}

	    b++;
	}

	a++;
	}

	return ('\0');
}
