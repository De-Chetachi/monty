#include "monty.h"

/**
* stack_pop - removes the top element;
* @top: pointer to the top of the stack;
* Return: void
*/

void stack_pop(stack_t **head)
{
	stack_t *temp;
	
	if (*head)
	{
		temp = (*head)->next;
		temp->prev = NULL;
		/*free(top);*/
		(*head) = temp;
	}
}

void monty_pop(stack_t **head, unsigned int line_number)
{
	stack_t *top = *head;
	
	if (!top)
	{
		fprintf(stderr, "L<%u>: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_pop(head);
}
