#include "monty.h"

/**
* stack_ele_mul - multiolies the top two elements of a stack
* @top: pointer to the top of the stack
* Return: void
*/

void stack_ele_mul(stack_t **head)
{
	stack_t *top = *head;
        stack_t *temp;

        temp = top->next;
        temp->n = temp->n * top->n;
}

void monty_mul(stack_t **top, unsigned int line_number)
{
        if (stack_len(*top) < 2)
        {
                fprintf(stderr, "L<%u>: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
        }
        else
        {
                stack_ele_mul(top);
                stack_pop(top);
        
	}
}
