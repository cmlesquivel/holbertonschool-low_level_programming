#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size the new hash table
 * Return: the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
if (size)
{
hash_table_t *new_list = NULL;

new_list = malloc(sizeof(hash_table_t));

if (new_list == NULL)
{
return (NULL);
}

new_list->size = size;
new_list->array = NULL;

return (new_list);

}
return (NULL);
}