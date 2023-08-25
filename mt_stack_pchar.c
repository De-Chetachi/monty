#include "monty.h"

/**
* monty_pchar - prints a character 
* @top: pointer to the top of the stack
* Return: void
*/

void monty_pchar(stack_t **head, unsigned int line_number)
{
	int c;
	stack_t *top = *head;

	if (top == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	c = top->n;
	if (c < 0 || c > 127)
	{
		fprintf(stderr,"L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	putchar(c);
	putchar('\n');
}
