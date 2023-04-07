#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Program adds positive numbers
 * @argc: No. of command line arguements
 * @argv: Array of command line arguements
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, x, total;

	total = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}
		}
			total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
