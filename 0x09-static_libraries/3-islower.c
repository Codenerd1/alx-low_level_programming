#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - A function to check whether a charachter is lowercase
 * @c: The charachter to print
 *
 * Return: The lowercase charachters in 'c'
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
