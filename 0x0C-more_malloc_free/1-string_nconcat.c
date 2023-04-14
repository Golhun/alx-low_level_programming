#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - Entry point
 * Description: A function that concatenates two strings
 * @s1: Character
 * @s2: Character
 * @q: Integer
 * Return: rst
 */

char *string_nconcat(char *s1, char *s2, unsigned int q)
{
	size_t s1Length, s2Length;
	char *rst;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}

	s1Length = strlen(s1);
	s2Length = strlen(s2);
	if (q >= s2Length)
	{
		q = s2Length;
	}
	rst = malloc(s1Length + q + 1);

	if (!rst)
	{
		return (NULL);
	}
	memcpy(rst, s1, s1Length);

	memcpy(rst + s1Length, s2, q);
	rst[s1Length + q] = '\0';
	return (rst);
}
