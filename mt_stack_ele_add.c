#include "monty.h"

/**
* stack_ele_add - adds the top two elements of a stack
* @top: pointer to the top of the stack
* Return: void
*/

void stack_ele_add(stack_t **head)
{
	stack_t *top = *head;
	stack_t *temp;

	temp = top->next;
	temp->n = temp->n + top->n;
}

void monty_add(stack_t **head, unsigned int line_number)
{
	if (stack_len(*head) < 2)
	{
		fprintf(stderr, "L<%u>: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		stack_ele_add(head);
		stack_pop(head);
	}
}
