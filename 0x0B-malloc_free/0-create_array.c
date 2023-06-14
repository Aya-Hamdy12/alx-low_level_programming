#include "main.h"
#include "stdlib.h"

/**
 * *create_array - returns a pointer to the first byte of the allocated memory
 * @c: the address of memory to print
 * @size: the size of the memory to print
 * Return: Char character c
 */

char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));

	if (size == 0 || p == 0)
	{
		return (0);
	}
	while (size--)
	{
		p[size] = c;
	}
		return (p);
}
