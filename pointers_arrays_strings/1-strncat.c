#include "main.h"

/**
 *_strncat - concatenates two strings
 *
 *@dest: pointer
 *@src: pointer
 *@n: variable
 *
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int b;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[i + b] = src[b];
	}

	dest[i + b] = '\0';
	return (dest);
}	
