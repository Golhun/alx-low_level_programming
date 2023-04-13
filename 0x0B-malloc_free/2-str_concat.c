#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Entry point
 * Description: Concatenates two string
 * @s1: Char
 * @s2: Char
 *
 * Return: Character
 */

char *str_concat(char *s1, char *s2)
{
	int length = 0;
	int i;
	int a = 0;
	char *rst;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		length++;
	}

	rst = malloc((length) * sizeof(char));

	if (rst == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		rst[a++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		rst[a++] = s2[i];
	}
	return (rst);
}

