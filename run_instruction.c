#include "monty.h"


void run_instruction(char *line, stack_t **stack, instruction_t *instructions, unsigned int line_number)
{
    char *opcode = NULL, *arg = NULL;
    int i = 0;
    unsigned int value;

    opcode = strtok(line, " $\n\t");
    if (opcode == NULL)
        return;
    arg = strtok(NULL, " $\n\t");
    if (arg != NULL)
        value = atoi(arg);
    while (instructions[i].opcode != NULL)
    {
        if (strcmp(opcode, instructions[i].opcode) == 0)
        {
            if (strcmp(opcode, "push") == 0)
            {
                if (arg == NULL || is_number(arg) == 0)
                {
                    fprintf(stderr, "L%u: usage: push integer\n", line_number);
                    exit(EXIT_FAILURE);
                }
                instructions[i].f(stack, value);
                return;
            }
            else
            {
                instructions[i].f(stack, line_number);
                return;
            }
        }
        i++;
    }
    fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
    exit(EXIT_FAILURE);
}

int is_number(char *arg)
{
    int i = 0;

    if (arg == NULL)
        return (0);
    if (arg[0] == '-')
        i++;
    while (arg[i] != '\0')
    {
        if (isdigit(arg[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}


// void run_instruction(char *line, stack_t **stack, instruction_t *instructions, unsigned int line_number)
// {
//     int i;
//     unsigned int value_int;
//     char *opcode, *value;

//     opcode = strtok(line, " \t\n");
//     if (!opcode)
//         return;

//     if (strcmp(opcode, instructions[i].opcode) == 0)
//     {
//         if (strcmp(opcode, "push") == 0)
//         {
//             value = strtok(NULL, " \t\n");
//             if (value == NULL)
//             {
//                 fprintf(stderr, "L%u: usage: push integer\n", line_number);
//                 exit(EXIT_FAILURE);
//             }
//             value_int = atoi(value);
//             instructions[i].f(stack, value_int);
//         }
//         else
//         {
//             instructions[i].f(stack, line_number);
//         }
//     }

//     fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
//     exit(EXIT_FAILURE);
// }