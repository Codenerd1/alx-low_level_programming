#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcpy - A function to copy a string from a source to a new destination
 * @src: The source of the string to be copied
 * @dest: The new destination for the string to be copied
 *
 * Return: A string in the new destination
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
