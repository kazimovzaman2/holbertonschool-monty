#include "monty.h"


/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 *
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void) line_number;

	if (temp && temp->next)
	{
		while (temp->next)
			temp = temp->next;
		temp->prev->next = NULL;
		temp->prev = NULL;
		temp->next = *stack;
		*stack = temp;
	}
}
