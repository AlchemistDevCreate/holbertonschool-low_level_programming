#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libera la memoria de un perro creado con new_dog
 * @d: puntero al perro que se va a liberar
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
