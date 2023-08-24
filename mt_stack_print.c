#include "monty.h"

/**
* stack_print - prints the elements of the array
* @head: pointer to the top of the stack
* Return: void
*/

stack_t *stack_print(stack_t **top)
{
	stack_t *head = *top;

	while(head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
	return (*top);
}

/**
* monty_pall - hjkl
* @head: head
* @line_number: line num
* Return: void
*/
void monty_pall(stack_t **head, unsigned int line_number)
{
	(void)line_number;
	stack_print(head);
}
