#ifndef DOG_H
#define DOG_H

/**
 * struct dog - record for dog
 * @name: name
 * @age: dog age
 * @owner: owner name
 * Description: dog profile
*/

struct dog
{
	char *name;
	float age;
	char *owner;

};

typedef struct dog dog_t;

#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
