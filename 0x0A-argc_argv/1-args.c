#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints number of arguements passed
 * @argc: No. of command line arguements
 * @argv: array of commands
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
