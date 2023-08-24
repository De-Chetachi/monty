#include "monty.h"

/**
* monty_pstr - prints the string starting at the top of the stack
* @top: top of stack
* Return: void
*/

void monty_pstr(stack_t **top, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;
	temp = *top;
	while (temp && (temp->n > 0 && temp->n < 128))
	{
		putchar(temp->n);
		temp = temp->next;
	}
	printf("\n");
}
