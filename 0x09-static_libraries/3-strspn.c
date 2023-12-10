#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - A function to determine the initial length of a string
 * @s: A pointer to the null-terminated string to be scanned
 * @accept: A pointer to the null-terminated string to be matched
 *
 * Return: Length of the length of initial segment of 's' that matches 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
