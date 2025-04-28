#include "main.h"

/**
 * print_number - Prints an integer with proper spacing.
 * @num: The number to print.
 */
void print_number(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
	}
	else if (num < 100)
	{
		_putchar(' ');
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
	else
	{
		_putchar(num / 100 + '0');
		_putchar((num / 10) % 10 + '0');
		_putchar(num % 10 + '0');
	}
}

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for the times table.
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j == 0)
			{
				_putchar(product + '0');
			}
			else
			{
				print_number(product);
			}
		}
		_putchar('\n');
	}
}
