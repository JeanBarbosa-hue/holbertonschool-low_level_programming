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
	free(d->owner);
	free(d->name);
	free(d);
}
