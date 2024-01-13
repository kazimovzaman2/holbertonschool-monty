#include "monty.h"



/**
 * pstr_recursive - helper function for pstr
 * @node: pointer to the current node
 *
 * Return: void
 */
void pstr_recursive(stack_t *node)
{
	if (!node || node->n == 0)
		return;

	putchar(node->n);
	pstr_recursive(node->next);
}

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	if (stack == NULL || *stack == NULL)
		return;

	pstr_recursive(*stack);
	if ((*stack)->n != 0)
		putchar('\n');
}
