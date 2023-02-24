#include "main.h"

/**
 * _isupper - checks if the letter is upper case
 * @x: The value to be checked
 *
 * Return: 1 if the letteris uppercase, 0 otherwise
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
