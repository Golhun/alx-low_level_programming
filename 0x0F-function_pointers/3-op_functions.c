#include "3-calc.h"

/**
 * op_add - Entry point
 * Description: returns outcome of i plus k
 * @i: first integer
 * @k: second integer
 * Return: sum of i and k
 */

int op_add(int i, int k)
{
	return (i + k);
}

/**
 * op_sub - Entry point
 * Description: returns outcome of k subtracted from i
 * @i: first integer
 * @k: second integer
 * Return: difference of i and k
 */

int op_sub(int i, int k)
{
	return (i - k);
}

/**
 * op_mul - Entry point
 * Description: returns product of i multiplied by k
 * @i: first integer
 * @k: second integer
 * Return: product of i and k
 */

int op_mul(int i, int k)
{
	return (i * k);
}

/**
 * op_div - Entry point
 * Description: returns outcome of i divided by k
 * @i: first integer
 * @k: second integer
 * Return: result of the division of i by k
 */

int op_div(int i, int k)
{
	return (i / k);
}

/**
 * op_mod - Entry point
 * Description: returns the remainder of the division of a by b
 * @i: first integer
 * @k: second integer
 * Return: remainder of the division of i by k
 */

int op_mod(int i, int k)
{
	return (i % k);
}
