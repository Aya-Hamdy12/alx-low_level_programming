#include "main.h"

/**
 * factorial - return factorial of number
 * @n: int number n
 * Return: integr number
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
