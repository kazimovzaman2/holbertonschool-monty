#include "monty.h"


/**
 * add - adds the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
    stack_t *new = malloc(sizeof(stack_t));
    stack_t *curr = NULL, *add = NULL;

    if (!stack || !(*stack) || !(*stack)->next)
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


    new->n = (*stack)->n + (*stack)->next->n;
    new->next = (*stack)->next->next;
    new->prev = NULL;
    *stack = new;
}
