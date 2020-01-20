#include "hash_tables.h"


/**
 * hash_djb21 - function implementing the djb2 algorithm
 * @str: key
 * Return: the hash
 */

unsigned long int hash_djb21(const char *str)
{
unsigned long int hash;
int c;

hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash)+c;
}

return (hash);
}

/**
 * key_index1 - function that gives you the index of a key.
 * @key: key
 * @size: size of the array of the hash table
 * Return: index the hash table
 */

unsigned long int key_index1(const char *key, unsigned long int size)
{
unsigned long int index = hash_djb21(key) % size;

return (index);
}

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:  hash table
 * @key: key
 * Return: the value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *aux;
unsigned long int size = ht->size;
unsigned long int index = key_index1(key, size);

if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}

aux = ht->array[index];

while (aux != NULL)
{
if (strcmp(aux->key, key) == 0)
{
return (aux->value);
}
else
{
aux = aux->next;
}
}
return (NULL);


}
