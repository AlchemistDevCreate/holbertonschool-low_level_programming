#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to be printed
 */
void puts_half(char *str)
{
	int length = 0, i, n;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2 + 1;
	}

	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
