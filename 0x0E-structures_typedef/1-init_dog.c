#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable with struct dog
 * @d: array
 * @name: pointer to arrray
 * @age: float
 * @owner: char to array
 * Description: Struct for DOg
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
