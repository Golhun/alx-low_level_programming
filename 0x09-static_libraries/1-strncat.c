#include "main.h"

/**
 * *_strncat - Entry point
 *Description: Concatenates two strings
 *@dest: character
 *@src: Character
 *@n: integer
 *
 *Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	char *m = dest;

	/*Determne end of dest*/
	while (*m != '\0')
	{
		m++;
	}
	/*Here we append up to n bytes from src*/
	while (*src != '\0' && n-- > 0)
	{
		*m++ = *src++;
	}
	/*
	 * Adding null terminator to dest
	 *Ensures subsequent functions using string know string end.
	 */
	*m = '\0';
	return (dest);
}
