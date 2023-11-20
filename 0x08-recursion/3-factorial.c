#include "main.h"

/**
 * factorial - name of the function
 * @n: the parameter of the function
 *
 * Return: an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
