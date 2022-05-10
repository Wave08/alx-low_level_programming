#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to an element of type dog
 * @age: age f dog
 * @owner: pointer to a char for the owner of dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}
}
