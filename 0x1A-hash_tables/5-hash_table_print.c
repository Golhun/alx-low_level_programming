#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 * they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;
unsigned char comma_flag = 0;

/* Check if the hash table is invalid */
if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
/* Check if the current index is not empty */
if (ht->array[i] != NULL)
{
/* Print comma separator if necessary */
if (comma_flag == 1)
printf(", ");

/* Traverse the linked list at the current index */
node = ht->array[i];
while (node != NULL)
{
/* Print key-value pair */
printf("'%s': '%s'", node->key, node->value);

/* Move to the next node */
node = node->next;

/* Print comma separator if there are more nodes */
if (node != NULL)
printf(", ");
}

/* Set comma flag to indicate that a comma has been printed */
comma_flag = 1;
}
}
printf("}\n");
}
