#include "main.h"

/**
 * _strstr - Entry point
 * Description: Locates a substring
 * @haystack: character
 * @needle: character
 *
 * Return: character
 */

char *_strstr(char *needle, char *haystack)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
