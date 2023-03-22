#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free space for dog
 *
 * d: pointer
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);

}
