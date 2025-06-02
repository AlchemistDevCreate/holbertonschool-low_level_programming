#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - crea una copia de una cadena usando malloc
 * @str: cadena original
 * Return: puntero a la nueva cadena, o NULL si falla
 */
char *_strdup(char *str)
{
	char *copy;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - crea un nuevo perro (estructura dog_t)
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: nombre del dueño
 * Return: puntero al nuevo perro, o NULL si falla
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
