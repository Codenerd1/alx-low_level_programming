#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - A function to copy a block of memory from one location to another
 * @dest: A pointer to the destination where the memory will be copied
 * @src: A pointer to the source where the memory will be copied
 * @n: The number of bytes to be copied from the 'src' to the 'dest'
 *
 * Return: Pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
