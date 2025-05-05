#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: String to capitalize.
 * Return: Pointer to the capitalized string.
 */

char *cap_string(char *str)
{
	int i, j;
	char specials[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		for (j = 0; j < 13; j++)
		{
			if (str[i] == specials[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}

	return (str);
}