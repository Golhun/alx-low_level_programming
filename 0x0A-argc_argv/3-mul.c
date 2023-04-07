#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 * Description: Multiplies two given numbers
 * @argc: No. of command of command line arguements
 * @argv: array of commands
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int q1, q2, rst;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	q1 = atoi(argv[1]);
	q2 = atoi(argv[2]);
	rst = q1 * q2;
	printf("%d\n", rst);
	return (0);
}
