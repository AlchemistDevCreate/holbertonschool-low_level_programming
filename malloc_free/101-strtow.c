#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string
 * @str: The string to count words in
 *
 * Return: Number of words
 */

int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && str[i] != ' ')
			i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count, word_length;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; k < word_count; k++)
	{
		while (str[i] == ' ')
			i++;
		word_length = 0;
		while (str[i + word_length] && str[i + word_length] != ' ')
			word_length++;

		words[k] = malloc((word_length + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_length; j++)
			words[k][j] = str[i + j];
		words[k][j] = '\0';
		i += word_length;
	}
	words[k] = NULL;

	return (words);
}
