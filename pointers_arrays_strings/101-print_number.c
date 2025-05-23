#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * print_number - Imprime un número entero.
 * @n: El número a imprimir.
 */

void print_number(int n)
{
		unsigned int num;

		if (n < 0)
		{
			_putchar('-');
			num = -n;
		}
		else
		{
			num = n;
		}

		if (num / 10)
		{
			print_number(num / 10);
		}

		_putchar((num % 10) + '0');
}
