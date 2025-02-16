#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments passed to the program
 *
 * Return: 0 if successful, 1 if there are errors in input
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = strtol(argv[i], &ptr, 10);
		if (*ptr != '\0' || !isdigit(argv[i][0]))
		{
			printf("Error\n");
			return (1);
		}
		sum += j;
	}

	printf("%d\n", sum);

	return (0);
}
