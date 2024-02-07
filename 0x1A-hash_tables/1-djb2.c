/**
 * hash_djb2 - Hash function implementing the djb2 algorithm
 * @str: The string to hash
 *
 * Return: The computed hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = hash * 33 + c; /* Equivalent to: hash * 33 + c */

	return (hash);
}
