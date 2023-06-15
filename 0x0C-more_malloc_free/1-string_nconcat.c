#include "main.h"
#include "stdlib.h"
#include "stdio.h"


/**
 * *string_nconcat - returned pointer shall point to a newly allocated space
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * @s1: string
 * @s2: string
 * @n: unsigned integr
 * Return: 0
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int Size_S1 = 0, Size_S2 = 0, i;

	while (s1[Size_S1] != '\0')
		++Size_S1;

	while (s2[Size_S2] != '\0')
		++Size_S2;

	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = malloc((Size_S1 + Size_S2) * sizeof(char) + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < Size_S1 + Size_S2; ++i)
	{
		if (i < Size_S1)
			a[i] = s1[i];
		else
			a[i] = s2[i - Size_S1];
	}
	a[i] = '\0';
	return (a);

}
