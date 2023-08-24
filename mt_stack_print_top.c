#include "monty.h"

/**
* print_top - prints the element at the top of stack
* @top: pointer to stack top
* Return: void
*/

void print_top(stack_t **head)
{
	stack_t *top = *head;
	if (top)
	{
		printf("%d\n", top->n);
	}
}

void monty_pint(stack_t **head, unsigned int line_number)
{
	stack_t *top = *head;

	if (!top)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	print_top(head);
}
