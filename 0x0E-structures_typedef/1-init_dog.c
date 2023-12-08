#include "dog.h"

/**
 * init_dog - init the vairable
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * @d: struct
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
