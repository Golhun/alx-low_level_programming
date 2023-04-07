#include "main.h"

/**
 * _strspn - Entry point
 *Description: Gets prefix sunstring length
 * @s: charater
 *@accept: character
 *
 * Return: Character
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int strlen = 0;
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				strlen++;
				break;
			}
			if (accept[x] == '\0')
			{
				return (strlen);
			}
		}
	}
		return (strlen);
}
