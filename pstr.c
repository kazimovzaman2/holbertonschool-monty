#include "monty.h"


/**
 * pstr - prints the string starting at the top of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: line number of the opcode
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	while ((*stack) && (*stack)->n > 0 && (*stack)->n < 128)
	{
		printf("%c", (*stack)->n);
		(*stack) = (*stack)->next;
	}
	printf("\n");
}
