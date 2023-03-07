#include "main.h"

/**
 * _memset - Entry point
 *  @s: input
 *  @b: input
 *  @n: variable
 *  Return: Always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
