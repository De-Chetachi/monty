#include "monty.h"

int stack_len(stack_t *top)
{
	int len = 0;
	stack_t *temp = top;

	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
