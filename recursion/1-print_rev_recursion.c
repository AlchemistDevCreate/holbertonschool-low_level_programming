#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _print_rev_recursion - imprime una cadena al revés
 * @s: puntero a la cadena que se imprimirá al revés
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	write(1, s, 1);
}
