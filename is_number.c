#include "monty.h"


/**
 * is_number - check the code
 *
 * @arg: var
 *
 * Return: Always 0.
 */
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
