#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - A function that records the first occurence of a substring
 * @haystack: A pointer to the null-terminated string to be scanned
 * @needle: A pointer to the null-terminated substring to be located
 *
 * Return: the first occurence of 'needle'
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
