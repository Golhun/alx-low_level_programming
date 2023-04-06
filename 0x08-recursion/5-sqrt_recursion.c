#include "main.h"

/**
 * _sqrt - Entry point
 * Description: Checks for natural square root
 * @a: integer
 * @b: integer
 *
 * Return: -1 if negative a if 0 or 1
 */

int _sqrt(int a, int b)
{
	if ((b * b) == a)
	{
		return (b);
	}
	if (b == a / 2)
	{
		return (-1);
	}
	return (_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - Entry point
 * @a: integer
 *
 * Return: -1 if negative a if 0 or 1
 */

int _sqrt_recursion(int a)
{
	int b = 0;

	if (a < 0)
	{
		return (-1);
	}
	if (a == 1)
	{
		return (1);
	}
	return (_sqrt(a, b));
}
