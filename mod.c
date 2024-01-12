#include "monty.h"


/**
 * mod - computes the rest of the division of the second top element
 * of the stack by the top element of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: line number being executed from script file
 *
 * Return: nothing
 */
void mod(stack_t **stack, unsigned int line_number)
{
	int num;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	num = (*stack)->next->n % (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = num;
}
