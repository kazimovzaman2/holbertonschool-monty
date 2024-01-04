#include "monty.h"


/**
 * pop - check the code
 *
 * @stack: var
 * @line_number: var
 *
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	if (*stack)
		(*stack)->prev = NULL;
}
