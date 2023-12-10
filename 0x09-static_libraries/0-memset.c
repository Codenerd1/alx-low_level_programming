#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - A function to fill a block of memory with a specified value
 * @s: A pointer to the memory block to be filled
 * @b: value to be set
 * @n: The number of bytes to be set to the specified value
 *
 * Return: Pointer to the filled memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
