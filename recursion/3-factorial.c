#include "main.h"
#include <stdio.h>

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial for.
 * Return: The factorial of n. If n < 0, returns -1.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
