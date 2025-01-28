#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i, max_factor;

	while (n % 2 == 0)
	{
		max_factor = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_factor = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		max_factor = n;
	}

	printf("%lu\n", max_factor);

	return (0);
}
