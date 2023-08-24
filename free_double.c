#include "monty.h"
/**
* free_double - frees a two dimensional array
* @vector: Pointer to array
* Return: nothing
*/

void free_double(char **vector)
{
	int i;

	i = 0;
	if (vector)
	{
		while (vector[i])
		{
			free(vector[i]);
			i++;
		}
		free(vector);
	}
}

/**
* free_dlistint - frees a dlistint_t list.
* @head: pointer to list
* Return: VOID
*/

void free_stack_t(stack_t *head)
{
	stack_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
		/*temp = head;*/
	}
}
