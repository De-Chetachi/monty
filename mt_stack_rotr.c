#include "monty.h"

/**
* monty_rotr - rotates the stack to the bottom.
* @top: top of the stack
* Return: void
*/

void monty_rotr(stack_t **head, unsigned int line_number)
{
	stack_t *top = *head;
	stack_t *temp;

	(void)line_number;
	if (top)
	{
		while (top->next)
		{
			top = top->next;
		}
	}
	*head = top;

	while (top)
	{
		temp = top->next;
		top->next = top->prev;
		top->prev = temp;
		top = top->next;
	}
}
