#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Busca un entero en un arreglo usando una función de comparación
 * @array: Arreglo de enteros
 * @size: Número de elementos en el arreglo
 * @cmp: Función de comparación
 *
 * Return: Índice del primer elemento que coincide, o -1 si no hay coincidencias o parámetros inválidos
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
