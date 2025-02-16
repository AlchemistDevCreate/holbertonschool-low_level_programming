#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Calculates the natural square
 * root of a number recursively.
 * @n: The number for which to calculate the square root.
 * Return: The natural square root of n.
 * If n does not have a natural square root, returns -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1));
	}
}

/**
 * _sqrt_helper - Helper function to recursively calculate the square root.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 * Return: The natural square root of n.
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, guess + 1));
	}
}
