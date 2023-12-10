#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - A function to locate the first occurence of a charachter
 * @s: A pointer to the null-terminated string to be scanned
 * @accept: A pointer to the null-terminated string to be matched
 *
 * Return: The first occurence of 's' that matches 'accept'
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
