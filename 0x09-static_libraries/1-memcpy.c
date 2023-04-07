#include "main.h"

/**
 * _memcpy - Entry point
 * Description: copies memory area
 * @dest: charater
 * @src: character
 * @n: integer
 *
 * Return: Charaater
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *bgn = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (bgn);
}
