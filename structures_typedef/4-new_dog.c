#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = malloc(strlen(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	else
		strcpy(ptr->name, name);

	ptr->age = age;
	ptr->owner = malloc(strlen(owner) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	else
		strcpy(ptr->owner, owner);

	return (ptr);
}
