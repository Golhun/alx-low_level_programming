#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Entry point
 * Description: Function returns pointer to newly allocated space in memory
 * @str: character
 *
 * Return: Character
 */

char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *strcpy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}

	strcpy = malloc((length + 1) * sizeof(char));

	if (strcpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		strcpy[i] = str[i];
	}
	strcpy[length] = '\0';
	return (strcpy);
}
