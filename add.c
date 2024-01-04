#include "monty.h"


/**
 * add - adds the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 *
 */
void add(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = NULL, *curr = NULL, *add = NULL;

    if (!(*stack) || !(*stack)->next)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
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
    *stack = temp->next;
    (*stack)->n += temp->n;
    free(temp);
    (*stack)->prev = NULL;
}
