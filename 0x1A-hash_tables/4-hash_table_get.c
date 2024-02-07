#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to retrieve the value of.
 *
 * Return: If the key cannot be matched - NULL. Otherwise - the value associated
 *         with the key in the hash table.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *node;
    unsigned long int index;

    /* Check if the hash table or key is invalid */
    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    /* Calculate the index of the key */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check if the index is out of bounds */
    if (index >= ht->size)
        return (NULL);

    /* Traverse the linked list at the calculated index to find the key */
    node = ht->array[index];
    while (node && strcmp(node->key, key) != 0)
        node = node->next;

    /* Return the value associated with the key if found */
    return (node == NULL ? NULL : node->value);
}
