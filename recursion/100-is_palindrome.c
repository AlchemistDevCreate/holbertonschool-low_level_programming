#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if @s is a palindrome, 0 otherwise
 *
 * A palindrome is a string that reads the same forwards and backwards.
 * An empty string is considered a palindrome.
 */

int is_palindrome(char *s)
{
	char *end;

	if (*s == '\0')
	{
		return (1);
	}

	end = s;
	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (s < end)
	{
		if (*s != *end)
		{
			return (0);

		}
		s++;
		end--;
	}

	return (1);
}
