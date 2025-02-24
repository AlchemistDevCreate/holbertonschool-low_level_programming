#include "main.h"

/**
 * wildcmp - Compares two strings considering wildcard character '*'.
 * @s1: First string to compare.
 * @s2: Second string to compare (may contain '*').
 *
 * Return: 1 if strings can be considered identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == '\0' && *s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
