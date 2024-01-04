#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
    stack_t *new = malloc(sizeof(stack_t));

    if (!new)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new->n = line_number;
    new->prev = NULL;
    new->next = *stack;

    if (*stack)
        (*stack)->prev = new;

    *stack = new;
}
