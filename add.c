#include "monty.h"


/**
 * add - adds the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 *
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack, *curr = NULL, *add = NULL;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
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

	temp->next->n += temp->n;
	pop(&temp, line_number);
	*stack = temp;
}
