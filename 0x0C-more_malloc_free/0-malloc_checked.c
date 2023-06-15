#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * *malloc_checked - Returns a pointer to the allocated memory
 * @b: is an unsigned integr value
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = (int *)malloc(b);

	if (a == NULL)
	exit(98);

		return (a);
}
