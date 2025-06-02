#ifndef DOG_H
#define DOG_H

/**
 * struct dog - estructura que define un perro
 * @name: nombre del perro (cadena de caracteres)
 * @age: edad del perro (flotante)
 * @owner: dueño del perro (cadena de caracteres)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
