#include "monty.h"

/**
* stack_swap - swaps the top two elements of a stack
* @top: pointer to the top of the stack
* Return: void
*/

void stack_swap(stack_t **head)
{
	stack_t *top = *head;
	stack_t *temp;
	int temp_n;

	temp = top->next;
	temp_n = temp->n;

	temp->n = top->n;
	top->n = temp_n;

}

void monty_swap(stack_t **head, unsigned int line_number)
{
	stack_t *top = *head;

	if (stack_len(top) < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		free_stack_t(glob.head);
                free_double(glob.av);
                free(glob.buff);
                exit(EXIT_FAILURE);
	}
	stack_swap(head);

}
