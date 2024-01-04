#include "monty.h"


/**
 * main - check the code
 *
 * @argc: var
 * @argv: var
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0, line_number = 0;
	stack_t *stack = NULL, *curr = NULL, *temp = NULL;
	instruction_t instructions[] = {
		{"push", push}, {"pall", pall}, {NULL, NULL}
	};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE); }

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE); }

	while (getline(&line, &len, file) != -1)
	{
		line_number++;
		run_instruction(line, &stack, instructions, line_number);
	}

	curr = stack;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	stack = NULL;
	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}
