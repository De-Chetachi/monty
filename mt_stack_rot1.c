#include "monty.h"

/**
* monty_rot1 -  rotates the stack to the top
* @top: pointer to top of stack
* Return: void
*/

void monty_rotl(stack_t **head, unsigned int line_number)
{
	stack_t *top;
	stack_t *temp = *head, *tail, *temp_top;
	int i = 0;

	(void)line_number;
	if (temp)
	{
		i++;
		while (temp->next)
		{
			temp = temp->next;
			i++;
		}
	}
	if (i > 1)
	{
		top = *head;
		if (i > 2)
		{
			tail = temp;
			tail->next = top;
			temp_top = top->next;
			top->prev = tail;
			top->next = NULL;
			temp_top->prev = NULL;
			*head = temp_top;
		}
		else if (i == 2)
		{
			tail = top->next;
			tail->prev = NULL;
			tail->next = top;
			top->prev = tail;
			top->next = NULL;
			*head = tail;
		}
	}
}
