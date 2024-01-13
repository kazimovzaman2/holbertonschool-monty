#include "monty.h"


/**
 * rotl - rotates the stack to the top
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 *
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int temp_n;

	(void)line_number;

	if (!temp || !temp->next)
		return;

	temp_n = temp->n;
	while (temp->next)
	{
		temp->n = temp->next->n;
		temp = temp->next;
	}
	temp->n = temp_n;
}
