#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _puts_recursion - imprime una cadena, seguida de una nueva línea
 * @s: puntero a la cadena a imprimir
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		write(1, "\n", 1);
		return;
	}
	write(1, s, 1);
	_puts_recursion(s + 1);
}
