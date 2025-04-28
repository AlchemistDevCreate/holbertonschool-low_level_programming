#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));

	while (sum < 2772)
	{
		c = rand() % 94 + 33;
		if (sum + c <= 2772)
		{
			printf("%c", c);
			sum += c;
		}
	}

	return (0);
}
