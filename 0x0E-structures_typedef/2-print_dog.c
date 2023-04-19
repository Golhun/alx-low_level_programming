#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Entry point
 * Description: Prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	/* Check if the input struct pointer is not null */
	if (d != NULL)
	{
		/* Print the name, or "(nil)" if it is null */
		printf("Name: ");
		switch (d->name != NULL)
		{
			case 1:
				printf("%s\n", d->name);
				break;
			default:
				printf("(nil)\n");
				break;
		}
		/* Print the age, or "(nil)" if it is null */
		printf("Age: ");
		switch (d->age >= 0)
		{
			case 1:
				printf("%f\n", d->age);
				break;
			default:
				printf("(nil)\n");
				break;
		}
		/* Print the owner, or "(nil)" if it is null */
		printf("Owner: ");
		switch (d->owner != NULL)
		{
			case 1:
				printf("%s\n", d->owner);
				break;
			default:
				printf("(nil)\n");
				break;
		}
	}
}
