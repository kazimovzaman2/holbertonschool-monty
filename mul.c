#include "monty.h"


/**
 * mul - multiplies the second top element of the stack with the top element
 * @stack: double pointer to the head of the stack
 * @line_number: line number being executed from script file
 *
 */
void mul(stack_t **stack, unsigned int line_number)
{
	int num;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	num = (*stack)->next->n * (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = num;
}
