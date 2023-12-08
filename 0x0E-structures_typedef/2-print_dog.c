#include "main.h"

/**
 * print_dog - print info about dog
 * @d: struct name
*/

void print_dog(struct dog *d)
{
	if (owner == NULL || age == NULL)
		printf("(nil)\n");
	if (name == NULL)
		printf("Name: (nil)\n")
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);

	}
}
