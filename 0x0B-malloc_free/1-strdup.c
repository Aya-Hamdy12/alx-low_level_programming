#include "main.h"
#include "stdlib.h"

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[size] != NULL ; size++)

		m = malloc(size * sizeof(*str) + 1);

	if (m == NULL)
	{
		return (NULL);
	}
	else
	{
		for (int i = 0 ; i < size ; i++)
			m[i] = str[i];
	}
	return (m);
}
