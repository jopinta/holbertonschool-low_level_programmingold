#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print doggy
 *@d: adress of struct
 *
 *
 *
 *
 */

void print_dog(struct dog *d)
{

	if (d)
	{
	if (!d->age)
		d->age = 0;
	printf("Age: %f\n", d->age);
	if (!d->name)
		d->name = "(nil)";
	printf("Name: %s\n", d->name);
	if (!d->owner)
		d->owner = "(nil)";
	printf("Owner: %s\n", d->owner);
	       }
}
