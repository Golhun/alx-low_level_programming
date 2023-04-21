#include "variadic_functions.h"

/**
 * sum_them_all - entry point
 * Description: returns the sum of all its parameters
 * @n: the number of parameters to sum
 * Return: the sum of all the parameters, or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	/* declare a variable of type va_list to store the parameters */
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	switch (n)
	{
		case 0:
			return (0);
		case 1:
			sum = va_arg(args, int);
			break;
		default:
			/* initialize the va_list with the first parameter */
			va_start(args, n);
			while (i < n)
			{
				sum += va_arg(args, int);
				i++;
				/* add each parameter to the sum */
			}
			/* clean up the va_list */
			va_end(args);
	}
	return (sum);
}
