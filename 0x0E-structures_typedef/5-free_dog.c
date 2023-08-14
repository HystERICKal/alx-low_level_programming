#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - This function frees dogs
 * @d: dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		/*Free name*/
		free(d->name);
		/*Free owner*/
		free(d->owner);
		/*Free dog*/
		free(d);
	}
}
