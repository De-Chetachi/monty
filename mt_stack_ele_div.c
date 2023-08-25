#include "monty.h"

/**
* stack_ele_div - divides the second top element of a stack by the top element
* @top: pointer to the top of the stack
* Return: void
*/

void stack_ele_div(stack_t **head, unsigned int line_number)
{
        stack_t *temp;
	stack_t *top = *head;

        temp = top->next;
	if (top->n != 0)
	{
        	temp->n = temp->n / top->n;
	}
	else
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		free_stack_t(glob.head);
                free_double(glob.av);
                free(glob.buff);
                exit(EXIT_FAILURE);
	}
}

/**
* monty_div - hjkl
* @head: head
* @line_number: line num
* Return: void
*/

void monty_div(stack_t **top, unsigned int line_number)
{
        if (stack_len(*top) < 2)
        {
                fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		free_stack_t(glob.head);
                free_double(glob.av);
                free(glob.buff);
		exit(EXIT_FAILURE);
        }
        else
        {
                stack_ele_div(top, line_number);
                stack_pop(top);
        }
}
