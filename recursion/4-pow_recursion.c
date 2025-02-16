#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Calculates the power of a number recursively.
 * @x: The base number.
 * @y: The exponent.
 * Return: x raised to the power of y. If y < 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
