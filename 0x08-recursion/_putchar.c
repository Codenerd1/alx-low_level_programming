#include <unistd.h>

/**
 * _putchar - writes charachter c to stdout
 * @c: The charachter to print
 *
 * Return: On success 1
 * On error, -1 is returned and erno is set appropriately
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
