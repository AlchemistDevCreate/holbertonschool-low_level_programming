#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Imprime todos los números naturales desde n hasta 98
 * @n: Número inicial
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", 98);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", 98);
	}
}
