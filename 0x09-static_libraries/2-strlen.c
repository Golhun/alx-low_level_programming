#include "main.h"

/**
 * _strlen - Entry point
 * Description: Gives length of a string
 * @s: integer
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
