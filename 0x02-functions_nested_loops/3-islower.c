#include "main.h"

/**
 * _islower - Function to create a lowercase character
 * @c: The character to be checked
 * Return: 1 or 0 for lowercase character or anything else respectively
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
