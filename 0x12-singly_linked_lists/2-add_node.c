#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new; /* Declare a pointer to a list_t struct */
	unsigned int len = 0;

	while (str[len]) /*Calculate the length of the input string*/
		len++;

	new = malloc(sizeof(list_t)); /*Allocate memory for a new list node*/
	if (!new)/*Check if memory allocation was successful*/
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head); /*Return the address of the new element*/
}
