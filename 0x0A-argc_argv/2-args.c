#include "main.h"
#include <stdio.h>

/**
 * main - ENtry point
 * Description: Prints the number of arguements passed to it
 * @argc: No. of command line arguements
 * @argv: array of commands
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

