#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 * Return: pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
if (size)
{
hash_table_t *new_list = NULL;
hash_node_t *cells = NULL;

new_list = malloc(sizeof(hash_table_t));

if (new_list == NULL)
{
return (NULL);
}

cells = malloc(size * sizeof(hash_node_t));

if (cells == NULL)
{
free(new_list);
return (NULL);
}

new_list->size = size;
new_list->array = &cells;

return (new_list);

}
return (NULL);
}
