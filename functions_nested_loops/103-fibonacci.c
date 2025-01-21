#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Finds and prints the sum of the even-valued terms in the
 *              Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int fib1 = 1, fib2 = 2, next_fib;
	long int sum_even = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum_even += fib1;
		}
		next_fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("%ld\n", sum_even);

	return (0);
}
