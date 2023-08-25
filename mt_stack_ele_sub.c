#include "monty.h"

/**
* stack_ele_sub - subs the top two elements of a stack
* @top: pointer to the top of the stack
* Return: void
*/

void stack_ele_sub(stack_t **head)
{
	stack_t *top = *head;
        stack_t *temp;

        temp = top->next;
        temp->n = temp->n - top->n;
}

void monty_sub(stack_t **top, unsigned int line_number)
{
        if (stack_len(*top) < 2)
        {
                fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
        }
        else
        {
                stack_ele_sub(top);
                stack_pop(top);
        }
}
