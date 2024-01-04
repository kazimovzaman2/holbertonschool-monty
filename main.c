#include "main.h"

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
    int file;
    char *line = NULL;
    size_t len = 0, line_number = 0;
    intruction_t instructions[] = {
        {"push", push},
        {"pall", pall}
    };

    if (argc != 2)
    {
        fprintf("USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = open(argv[1], O_RDONLY);
    if (file == -1)
    {
        fprintf("Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    
    while (getline(&line, &len, file) != -1)
    {
        line_number++;
    }

}
