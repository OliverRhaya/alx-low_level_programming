#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This function frees memory allocated for a struct dog
 * @d:Depicts struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
