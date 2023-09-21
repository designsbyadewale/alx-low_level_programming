#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head) /*Loop through the list until the head becomes NULL*/
	{
		temp = head->next; /*Store a reference to the next node*/
		free(head->str); /*Free the memory allocated in the current node*/
		free(head); /*Free the memory allocated for the current node*/
		head = temp; /*Move to the next node*/
	}
}
