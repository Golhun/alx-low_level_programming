#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *end_prod, char *nxt_prod, int next_len);

/**
 * find_len - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_len(char *str)
{
	int str_len = 0;

	while (*str++)
		str_len++;

	return (str_len);
}

/**
 * create_xarray - Creates an array of chars and initializes it with
 *                 the character 'x'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 *
 * Description: If there is insufficient space, the
 *              function exits with a status of 98.
 * Return: A pointer to the array.
 */
char *create_xarray(int size)
{
	char *new_arr;
	int index;

	new_arr = malloc(sizeof(char) * size);

	if (new_arr == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		new_arr[index] = 'x';

	new_arr[index] = '\0';

	return (new_arr);
}

/**
 * iterate_zeroes - Iterates through a string of numbers containing
 *                  leading zeroes until it hits a non-zero number.
 * @str: The string of numbers to be iterate through.
 *
 * Return: A pointer to the next non-zero element.
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function
 *              exits with a status of 98.
 * Return: The converted int.
 */
int get_digit(char c)
{
	int num_dgt = c - '0';

	if (num_dgt < 0 || num_dgt > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (num_dgt);
}

/**
 * get_prod - Multiplies a string of numbers by a single digit.
 * @prod: The buffer to store the result.
 * @mult: The string of numbers.
 * @digit: The single digit.
 * @zeroes: The necessary number of leading zeroes.
 *
 * Description: If mult contains a non-digit, the function
 *              exits with a status value of 98.
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int num_length;
	int num;
	int tens = 0;

	num_length = find_len(mult) - 1;
	mult += num_length;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; num_length >= 0; num_length--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_nums - Adds the numbers stored in two strings.
 * @end_prod: The buffer storing the running final product.
 * @nxt_prod: The next product to be added.
 * @next_len: The length of nxt_prod.
 */
void add_nums(char *end_prod, char *nxt_prod, int next_len)
{
	int num;
	int tens = 0;

	while (*(end_prod + 1))
		end_prod++;

	while (*(nxt_prod + 1))
		nxt_prod++;

	for (; *end_prod != 'x'; end_prod--)
	{
		num = (*end_prod - '0') + (*nxt_prod - '0');
		num += tens;
		*end_prod = (num % 10) + '0';
		tens = num / 10;

		nxt_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *nxt_prod != 'x'; next_len--)
	{
		num = (*nxt_prod - '0');
		num += tens;
		*end_prod = (num % 10) + '0';
		tens = num / 10;

		end_prod--;
		nxt_prod--;
	}

	if (tens)
		*end_prod = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *end_prod, *nxt_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	end_prod = create_xarray(size + 1);
	nxt_prod = create_xarray(size + 1);

	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_prod(nxt_prod, argv[1], digit, zeroes++);
		add_nums(end_prod, nxt_prod, size - 1);
	}
	for (index = 0; end_prod[index]; index++)
	{
		if (end_prod[index] != 'x')
			putchar(end_prod[index]);
	}
	putchar('\n');

	free(nxt_prod);
	free(end_prod);

	return (0);
}
