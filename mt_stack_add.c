#include "monty.h"

/**
* stack_add - adds a new node to a doubly linked list
* @top: pointer to the head of the stack
* Return: void
*/

stack_t *stack_add(stack_t **top)
{
	int n = atoi(glob.av[1]);
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack_t(glob.head);
		free_double(glob.av);
		free(glob.buff);
		exit(EXIT_FAILURE);
	}

	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if ((*top) == NULL)
	{
		*top = node;
	}
	else
	{
		(*top)->prev = node;
		node->next = *top;
		*top = node;
	}
	return (*top);
}

/**
* monty_push - hjkl
* @head: head
* @line_number: line number
* Return: void
*/

void monty_push(stack_t **head, unsigned int line_number)
{
	if (glob.opd_ac < 2 || atoi(glob.av[1]) == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free_stack_t(glob.head);
		free_double(glob.av);
		free(glob.buff);
		exit(EXIT_FAILURE);
	}
	stack_add(head);
}
