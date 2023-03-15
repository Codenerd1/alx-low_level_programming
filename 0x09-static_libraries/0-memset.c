#include "main.h"

/**
 * _memset - Entry point
 *  @s: starting address of the block to be filled
 *  @b: specifies the value to be set in each byte of the memory block
 *  @n: specifies the number of bytes to be filled
 *  Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
