#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name to be printed
 * @: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
