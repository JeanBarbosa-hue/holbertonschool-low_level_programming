#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars
 *
 * @size: integer
 * @c: character
 *
 * Return: Null
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i;

		if (size == 0)
			return (NULL);

		if (arr == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}

		return (arr);

}
