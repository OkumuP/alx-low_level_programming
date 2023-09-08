#include "hash_tables.h"

/**
 * key_index - Computes the index for a key/value pair in a hash table array.
 * @key: The key to calculate the index for.
 * @size: The size of the hash table's array.
 *
 * Return: The index for the given key.
 * Description: Uses the djb2 hash algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
