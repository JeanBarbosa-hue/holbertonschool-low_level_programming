#include "main.h"

/**
 * _strncpy - copy string
 *
 *@dest: pointer
 *@src: pointer
 *@n: variable
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

		while (src[i++])
			len++;

		for (i = 0; src[i] && i < n; i++)
			dest[i] = src[i];

		for (i = len; i < n; i++)
			dest[i] = '\0';

		return (dest);
}
