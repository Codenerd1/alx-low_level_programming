#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - A function to find the first occurence of a specific charachter
 * @s: A pointer to the null-terminated string to be searched
 * @c: charachter to be located within the string
 *
 * Return: The first occurence of 'c'
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
