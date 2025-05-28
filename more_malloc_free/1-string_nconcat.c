#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using n bytes from s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes to include from s2.
 *
 * Return: Pointer to the new concatenated string, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, j, len1 = 0, len2 = 0;
    char *result;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    if (n >= len2)
        n = len2;

    result = malloc(len1 + n + 1);
    if (result == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    for (j = 0; j < n; j++)
        result[i + j] = s2[j];

    result[i + j] = '\0';

    return (result);
}
