#include "main.h"

/**
 * *_strcpy - Entry point
 * Description: Copies string pointed to by *src
 * @dest: character
 * @src: character
 *
 * Return: character
 */

char *_strcpy(char *dest, char *src)
{
	char *k = dest;

	while (*src != '\0')
	{
		*k++ == *src++;
	}
	*k = '\0';
	return (dest);
}
