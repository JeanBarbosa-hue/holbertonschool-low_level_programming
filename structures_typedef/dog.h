#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type
 *
 * @name: char
 * @owner: char
 * @age: float
 *
 * Description: structure with the name dog with the variables name, age,owner
 */


struct dog
{
	char *name;
	char *owner;
	float age;


};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
