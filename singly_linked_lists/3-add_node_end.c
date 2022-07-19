#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list
 * @head: points to the head of list
 * @str: whats inside of our new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end_node;
	size_t nodes;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (nodes = 0; str[nodes]; nodes++)
		;

	new_node->len = nodes;
	new_node->next = NULL;
	end_node = *head;

	if (end_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = new_node;
	}

	return (*head);
}
