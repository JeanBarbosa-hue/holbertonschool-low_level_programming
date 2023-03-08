#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of string
 *
 * @s: variable
 *
 * Return: count
 */

int _strlen(char *s)
{
	int i, count = 0;

		for (i = 0; s[i] != '\0'; i++)
		{
			count++;
		}

		return (count);
}
