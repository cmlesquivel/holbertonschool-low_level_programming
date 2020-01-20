#include "hash_tables.h"

/**
 * hash_djb2_ - function implementing the djb2 algorithm
 * @str: key
 * Return: the hash
 */


unsigned long int hash_djb2_(const char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}

/**
 * new_node -  function that create a new node
 * @key: key
 * @value: is value associated with the key
 * Return: new node
 */

hash_node_t *new_node(const char *key, const char *value)
{

hash_node_t *new_hash_node = malloc(sizeof(hash_node_t));
char *temp_key = NULL;
char *temp_value = NULL;

if (new_hash_node == NULL)
{
return (0);
}

temp_key = malloc(sizeof(char) * (strlen(key) + 1));
if (temp_key == NULL)
{
free(new_hash_node);
return (0);
}
temp_value = malloc(sizeof(char) * (strlen(value) + 1));
if (temp_value == NULL)
{
free(temp_key);
free(new_hash_node);
return (0);
}

strcpy(temp_key, key);
strcpy(temp_value, value);

new_hash_node->key = temp_key;
new_hash_node->value = temp_value;
new_hash_node->next = NULL;

return (new_hash_node);

}

/**
 * key_index_ - function that gives you the index of a key.
 * @key: key
 * @size: size of the array of the hash table
 * Return: index the hash table
 */

unsigned long int key_index_(const char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2_(key) % size;

	return (index);
}

/**
 * hash_table_set -  function that adds an element to the hash table
 * @ht:  hash table you want to add or update the key/value
 * @key: key
 * @value: is value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int size = ht->size;
unsigned long int index = key_index_(key, size);
hash_node_t *new_hash_node = NULL;
hash_node_t *compare, *aux;

if (ht == NULL || key == NULL || *key == '\0')
return (0);
new_hash_node = new_node(key, value);
if (!new_hash_node)
return (0);
if (ht->array[index] == NULL)
ht->array[index] = new_hash_node;
else
{
compare = ht->array[index];
while (compare != NULL)
{
if (strcmp(compare->key, key) == 0)
{
free(compare->value);
free(new_hash_node->key);
free(new_hash_node->value);
free(new_hash_node);
compare->value = malloc(sizeof(char) * (strlen(value) + 1));
if (compare->value  == NULL)
return (0);
else
{
strcpy(compare->value, value);
return (1);
}
}
else
compare = compare->next;
}
aux = ht->array[index];
new_hash_node->next = aux;
ht->array[index] = new_hash_node;
}
return (1);
}
