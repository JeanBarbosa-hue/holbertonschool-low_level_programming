#include "main.h"

/**
 * _strspn - length of prefix substring
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: c
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;
	unsigned int c = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				c++;
			}

			b++;
		}

		a++;
	}

	return (c);
}
