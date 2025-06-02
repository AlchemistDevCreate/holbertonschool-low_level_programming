#include "dog.h"
#include <stdio.h>

/**
 * init_dog - inicializa una variable de tipo struct dog
 * @d: puntero a la estructura de tipo struct dog
 * @name: nombre a asignar
 * @age: edad a asignar
 * @owner: dueño a asignar
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
