#include "dog.h"

/**
 * print_dog - print info about dog
 * @d: struct name
*/

void print_dog(struct dog *d)
{
	if (d->owner == NULL)
		printf("(nil)\n");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);

	}
}
