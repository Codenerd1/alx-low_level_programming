#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - A function to check whether a charachter is uppercase
 * @c: The charachter to print
 *
 * Return: The uppercase charachters in 'c'
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
