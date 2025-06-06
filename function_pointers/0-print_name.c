#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Ejecuta una función que imprime un nombre
 * @name: Cadena con el nombre a imprimir
 * @f: Puntero a una función que toma un char * y no retorna nada
 *
 * Return: -
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
