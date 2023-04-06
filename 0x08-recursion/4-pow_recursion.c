#include "main.h"

/**
 * _pow_recursion - Entry point
 * Description: Returns the value of x raised to the power of  a value y
 * @x: integer
 * @y: integer
 *
 * Return: Integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}