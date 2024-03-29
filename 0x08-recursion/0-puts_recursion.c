#include "main.h"

/**
 * _puts_recursion - the function name
 * @s: parameter of the function
 *
 * Return: a string followed by a new line
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
