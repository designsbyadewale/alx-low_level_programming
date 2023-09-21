#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*Declare a new node and a temporary pointer*/
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len]) /*Calculate the length of the input string*/
		len++;

	new = malloc(sizeof(list_t)); /*Allocate memory for the new node*/
	if (!new)
		return (NULL);

	/*Copy the input string and set its length*/
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL) /*Make the new node the head, if the linked list is empty*/
	{
		*head = new;
		return (new);
	}

	while (temp->next) /*Find the last node and append the new node*/
		temp = temp->next;

	temp->next = new;

	return (new);
}
