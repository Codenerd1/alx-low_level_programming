#include <unistd.h>

/**
 * _putchar - includes charachter c n the stdout
 * @c: The character to be printed
 * Return: 1 (sucess)
 * Upon an error the return is -1, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
