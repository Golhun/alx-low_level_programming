#include "3-calc.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: performs simple operations
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num_A, num_B, outcome;
	char *op_func;

	/* Check if the number of arguments is correct */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* Convert num* string to int */
	num_A = atoi(argv[1]);
	num_B = atoi(argv[3]);

	/* Get function for operator */
	op_func = argv[2];

	/* Check if operator is invalid */
	if (get_op_func(op_func) == NULL || op_func[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num_B == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Call function with num_A and num_B */
	outcome = get_op_func(op_func)(num_A, num_B);

	printf("%d\n", outcome);
	return (0);
}
