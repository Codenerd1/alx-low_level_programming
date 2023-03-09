#include "main.h"
#include <stdio.h>

/**
 * _pint_rev_recursion - Print a string in reverse
 * @s: the string to be revised
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
