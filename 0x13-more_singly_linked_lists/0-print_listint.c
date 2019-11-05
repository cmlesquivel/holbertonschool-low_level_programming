#include <stdio.h>
#include <string.h>
#include "lists.h"


/**
 * print_number - print  digit number by digit number
 * @number: The number to print
 * Return: nothing
 */

void print_number(int number)
    {
        if (number>10)
        {
        print_number(number/10);
        }
        _putchar(number%10 + '0');
    }

/**
 * print_listing - function that prints all the elements of a listint_t list.
 * @h: element type listing_t
 * Return: the number of nodes
 *
 */


size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
	print_number(h->n);
	_putchar('\n');

		h=h->next;
		n++;
	}

	return (n);
}
