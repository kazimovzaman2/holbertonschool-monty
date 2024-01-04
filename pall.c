#include "monty.h"


/**
 * pall - check the code
 *
 * @stack: var
 * @line_number: var
 *
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void) line_number;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
