#include "main.h"

/**
 * _memset - Entry point
 * Description: Fills the memory with a constant byte
 * @s: character
 * @b: charater
 * @n: integer
 *
 * Return: character
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
