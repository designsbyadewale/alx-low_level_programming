#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0; /*Initialize a variable to store the count of elements*/

	while (h)
	{
		n++;
		h = h->next; /* Move to the next node in the list */
	}

	return (n); /* Return the total count of elements in the list */
}
