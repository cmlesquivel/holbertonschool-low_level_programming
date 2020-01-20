#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht:  hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *aux;
unsigned long int size = ht->size;
unsigned long int i;
int first_space = 0;


if (ht == NULL)
{
printf("{}\n");
return;
}

printf("{");
for (i = 0; i < size; i++)
{

aux = ht->array[i];
while (aux != NULL)
{
if (first_space != 0)
{
printf(", ");
}

printf("'%s': '%s'", aux->key, aux->value);
first_space = 1;
aux = aux->next;
}

}
printf("}\n");

}
