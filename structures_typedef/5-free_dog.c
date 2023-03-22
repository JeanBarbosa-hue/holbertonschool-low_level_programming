#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free space for dog
 *
 * @d: receives pointer
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL);
	{
		return (NULL);
	}

	free(d->owner);
	free(d->name);
	free(d);
}
