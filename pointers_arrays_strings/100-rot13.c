#include <stdio.h>
#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: String to encode.
 * Return: Pointer to the encoded string.
 */

char *rot13(char *str)
{
		char *ptr = str;
		char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		char replacement[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
		int i;

		while (*ptr != '\0')
		{
			for (i = 0; original[i] != '\0'; i++)
			{
				if (*ptr == original[i])
				{
					*ptr = replacement[i];
					break;
				}
			}
			ptr++;
		}

		return (str);
}
