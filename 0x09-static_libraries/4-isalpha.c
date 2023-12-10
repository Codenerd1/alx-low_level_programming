#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isalpha - A function to check whether a charachter is an alphabet
 * @c: The charachter to check
 *
 * Return: 1 if the charachter is an alphabetic letter, 0 if otherwise
 */
int _isalpha(int c)
{
	return (isalpha(c));
}
