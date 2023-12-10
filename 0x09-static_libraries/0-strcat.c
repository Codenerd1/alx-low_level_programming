#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcat - A function to concatenate one string to the end of another
 * @dest: The destination string where the concatenation will be performed
 * @src: The source string that will be appended to the destination
 *
 * Return: The 'dest' string
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
