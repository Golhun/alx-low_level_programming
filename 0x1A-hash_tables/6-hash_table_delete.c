#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table to delete.
 *
 * Description: Frees all memory associated with the hash table
 * and its elements.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_table_t *head = ht; // Keep track of the original hash table pointer
    hash_node_t *node, *tmp; // Node pointers for traversal and temporary storage
    unsigned long int i; // Loop counter

    // Traverse the array of the hash table
    for (i = 0; i < ht->size; i++)
    {
        // Check if the current index is not empty
        if (ht->array[i] != NULL)
        {
            // Start from the head of the linked list at the current index
            node = ht->array[i];
            while (node != NULL)
            {
                // Store the next node before freeing the current node
                tmp = node->next;
                // Free the key, value, and node itself
                free(node->key);
                free(node->value);
                free(node);
                // Move to the next node
                node = tmp;
            }
        }
    }

    // Free the array and the hash table itself
    free(head->array);
    free(head);
}
