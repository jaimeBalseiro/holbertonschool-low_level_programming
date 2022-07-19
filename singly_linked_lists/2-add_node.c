#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: points to the head of list
 * @str: whats inside of our new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t nodes;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (nodes = 0; str[nodes]; nodes++)
		;

	new_node->len = nodes;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
