#include "monty.h"

void monty_queue(stack_t **head, unsigned int line_number)
{
	(void)head;
	(void)line_number;
	glob.stack = 0;
}


void monty_stack(stack_t **head, unsigned int line_number)
{
        (void)head;
        (void)line_number;
        glob.stack = 1;
}
