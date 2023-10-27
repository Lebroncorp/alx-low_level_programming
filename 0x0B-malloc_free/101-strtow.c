#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int num = 0, len = 0;

	while (*(str + num) && *(str + num) != ' ')
	{
		len++;
		num++;
	}
	return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int num = 0;
	int words = 0;
	int len = 0;

	for (num = 0; *(str + num); num++)
		len++;

	for (num = 0; num < len; num++)
	{
		if (*(str + num) != ' ')
		{
			words++;
			num += word_len(str + num);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int num = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	words = count_words(str);
	if (words == 0)
	{
		return (NULL);
	}
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < words; w++)
	{
		while (str[num] == ' ')
		{
			num++;
		}
		letters = word_len(str + num);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(strings[w]);
			}
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			strings[w][l] = str[num++];
		}
		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
