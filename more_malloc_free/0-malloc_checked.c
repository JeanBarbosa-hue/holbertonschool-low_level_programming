#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory
 *
 * @b: unsigned integer
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *check = malloc(b);

	if (check == NULL)
	{
		exit(98);
	}

	return (check);
}
