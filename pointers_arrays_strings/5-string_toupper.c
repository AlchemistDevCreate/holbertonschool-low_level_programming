#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @str: String to convert.
 * Return: Pointer to the converted string.
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
