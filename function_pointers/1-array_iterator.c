#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Aplica una función sobre cada elemento de un arreglo
 * @array: Arreglo de enteros
 * @size: Número de elementos en el arreglo
 * @action: Función que se aplicará a cada elemento
 *
 * Return: Nada
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
