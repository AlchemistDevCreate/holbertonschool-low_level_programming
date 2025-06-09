#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: First operand
 * @b: Second operand
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: First operand
 * @b: Second operand
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First operand
 * @b: Second operand
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: Numerator
 * @b: Denominator
 * Return: Quotient of a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the remainder of division
 * @a: Numerator
 * @b: Denominator
 * Return: Remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
