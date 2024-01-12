#include "monty.h"


/**
 * div - divides the second top element of the stack by the top element
 * @stack: double pointer to the head of the stack
 * @line_number: line number being executed from script file
 *
 */
void div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int div = 0;

	if (!temp || !temp->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	div = temp->next->n / temp->n;
	pop(stack, line_number);
	(*stack)->n = div;
}
