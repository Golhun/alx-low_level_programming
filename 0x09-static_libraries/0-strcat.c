#include "main.h"

/**
 * *str_cat - Entry point
 * Description: Concatenates two strings
 * @dest: character
 * @src: charater
 *
 * Return: Character
 */

char *str_cat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
