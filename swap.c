#include "monty.h"


/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 *
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL, *curr = NULL, *add = NULL;
	int num;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		curr = *stack;
		while (curr != NULL)
		{
			add = curr;
			curr = curr->next;
			free(add);
		}
		stack = NULL;
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	num = temp->n;
	temp->n = temp->next->n;
	temp->next->n = num;
}
