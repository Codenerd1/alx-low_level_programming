#include "main.h"
#include <stdio.h>

/**
 * main - Counts and prints the number of arguements
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
