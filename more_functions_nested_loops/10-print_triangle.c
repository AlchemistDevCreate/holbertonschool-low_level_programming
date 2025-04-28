#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters of specified size
 * @size: size of the triangle
 */

void print_triangle(int size)
{

	int row = 0;
	int character = 0;
	int space =  0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
		{
			_putchar(' ');
		}
		for (character = 1; character <= row; character++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
