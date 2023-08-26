#include "monty.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: pointer to list head
* @n: node data
* Return: the address of the new element, or NULL if it failed
*/

stack_t *queue_add(stack_t **head)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (!node)
		return (NULL);
	node->n = atoi(glob.av[1]);
	node->prev = NULL;
	node->next = NULL;

	if (!(*head))
		*head = node;
	else
	{
		while ((*head)->next)
			*head = (*head)->next;
		(*head)->next = node;
		node->prev = *head;
		*head = node;
	}
	return (*head);
}
