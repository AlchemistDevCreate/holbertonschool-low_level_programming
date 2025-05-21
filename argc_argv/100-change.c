#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments passed to the program
 *
 * Return: 0 if successful, 1 if there are errors in input
 */

int main(int argc, char *argv[])
{
	int centavos;
	int denominaciones[] = {25, 10, 5, 2, 1};
	int num_denominaciones = sizeof(denominaciones) / sizeof(denominaciones[0]);
	int num_monedas = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	centavos = atoi(argv[1]);

	if (centavos < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_denominaciones; i++)
	{
		while (centavos >= denominaciones[i])
		{
			centavos -= denominaciones[i];
			num_monedas++;
		}
	}

	printf("%d\n", num_monedas);

	return (0);
}
