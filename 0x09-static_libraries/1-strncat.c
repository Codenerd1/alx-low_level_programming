#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - A function to concatenate a specified number of charachters
 * @dest: The destination string where the concatenation will be performed
 * @src: The source string that will be appended to the destination
 * @n: The maximum number of charachters to concatenate from 'src'
 *
 * Return: The 'dest' string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
