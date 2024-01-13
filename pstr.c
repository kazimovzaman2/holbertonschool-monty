#include "monty.h"


/**
 * pstr - prints the string starting at the top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int num;

	(void) line_number;

	if (!(*stack))
	{
		putchar('\n');
		return;
	}
	temp = *stack;
	while (temp)
	{
		num = temp->n;

		if (num <= 0 || num > 127)
			break;
		putchar(num);
		temp = temp->next;
	}
	putchar('\n');
}
