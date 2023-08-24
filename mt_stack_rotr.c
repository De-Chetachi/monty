#include "monty.h"

/**
* monty_rotr - rotates the stack to the bottom.
* @top: top of the stack
* Return: void
*/

void monty_rotr(stack_t **head, unsigned int line_number)
{
	stack_t *top = *head;
	stack_t *temp, *new_top;

	(void)line_number;
	while (top->next)
	{
		top = top->next;
	}
	new_top = top;

	while (top)
	{
		temp = top->next;
		top->next = top->prev;
		top->prev = temp;
		top = temp;
	}
	top = new_top;
}
