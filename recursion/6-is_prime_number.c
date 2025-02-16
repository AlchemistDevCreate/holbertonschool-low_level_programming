#include <stdio.h>
#include "main.h"

/**
 * is_prime_helper - Función auxiliar para verificar si un número es primo.
 * @n: The number to check.
 * @div: El divisor actual que se está probando.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_helper(int n, int div)
{

	if (n <= 1)
	{
		return (0);
	}
	if (div <= 1)
	{
		return (1);
	}

	if (n % div == 0)
	{
		return (0);
	}


	return (is_prime_helper(n, div - 1));
}

/**
 * is_prime_number - Checks if a given number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
