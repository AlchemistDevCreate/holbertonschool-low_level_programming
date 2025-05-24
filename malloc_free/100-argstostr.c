#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to the new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, total_length = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}
	total_length++;

	result = malloc(total_length * sizeof(char));
	if (result == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			result[k] = av[i][j];
		result[k] = '\n';
		k++;
	}
	result[k] = '\0';

	return (result);
}
