#include "main.h"

/**
 * is_divisible - Entry point
 * Description: returns 1 if integer is a prime number 0 if otherwise
 * @i: integer
 * @div: integer
 *
 * Return: 1 if prime 0 if otherwise
 */

int is_divisible(int i, int div)
{
	if (div == 1 || div == i)
	{
		return (0);
	}
	if (i % div == 0)
	{
		return (1);
	}
	return (is_divisible(i, div - 1));
}

/**
 * is_prime_number - Entry point
 * Description: Checks for prime numbers
 * @i: integer
 *
 * Return: 1 if prime 0 if otherwise
 */

int is_prime_number(int i)
{
	if (i <= 1)
	{
		return (0);
	}
	if (i == 2)
	{
		return (1);
	}
	return (!is_divisible(i, i - 1));
}
