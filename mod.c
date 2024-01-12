#include "monty.h"


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
