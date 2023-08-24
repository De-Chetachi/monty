#include "monty.h"

/**
* stack_print - prints the elements of the array
* @head: pointer to the top of the stack
* Return: void
*/

void stack_print(stack_t **top)
{
	stack_t *head = *top;
	stack_t *temp;

	temp = head;
	while(temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

void monty_pall(stack_t **head, unsigned int line_number)
{
	(void)line_number;
	stack_print(head);
}
