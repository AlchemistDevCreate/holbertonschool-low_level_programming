#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *              separated by a comma followed by a space.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;
	int count;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 92; count++)
	{
		unsigned long next_fib = fib1 + fib2;

		printf(", %lu", next_fib);

		fib1 = fib2;
		fib2 = next_fib;
	}

	fib1_half1 = fib1 / 10000000000UL;
	fib1_half2 = fib1 % 10000000000UL;
	fib2_half1 = fib2 / 10000000000UL;
	fib2_half2 = fib2 % 10000000000UL;

	for (count = 93; count <= 98; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (half2 >= 10000000000UL)
		{
			half1 += 1;
			half2 %= 10000000000UL;
		}
		printf(", %lu%010lu", half1, half2);
		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");

	return (0);
}
