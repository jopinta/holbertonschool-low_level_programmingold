#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - who let the dogs out
 *@d: structure to breakfeee
 *
 *
 */

void free_dog(dog_t *d)
{

	if (d)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
