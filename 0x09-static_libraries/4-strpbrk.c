#include "main.h"

/**
 * _strpbrk - Entry point
 * Description: Looks for a specific set of characters within a string
 * @s: character
 * @accept: character
 *
 * Return: character
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *h = accept;

		while (*h != '\0')
		{
			if (*h == *s)
			{
				return (s);
			}
			h++;
		}
		s++;
	}
	return ('\0');
}
