#include "main.h"

/**
 * factorial - Entry point
 * Description: returns the factorial of a given number
 * @n: Integer
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}