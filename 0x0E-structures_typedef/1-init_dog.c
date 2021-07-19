#include <stdlib.h>
#include "dog.h"

/**
 *  init_dog - funtiont to initialize the variable
 *@d: structure
 *@name: doggy
 *@age: 15
 *@owner: good
 *
 *Return : always 0
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{


if (d)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
}
