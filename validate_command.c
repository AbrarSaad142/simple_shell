#include "main.h"
/**
 * validate_command - validate command
 * @lineptr:command line.
 * @lineptr_copy: copy command line.
 * @n: iteration.
 * Return: return int.
 */
int validate_command(char **lineptr, size_t *n, char **lineptr_copy)
{
	char *prompt = "$ ";

	ssize_t nchars_read;

	printf("%s", prompt);
	nchars_read = getline(lineptr, n, stdin);

	if (nchars_read == -1)
	{
		printf("Exiting shell....\n");
		return (-1);
	}

	*lineptr_copy = malloc(sizeof(char) * nchars_read);

	if (*lineptr_copy == NULL)
	{
		perror("tsh: memory allocation error");
		return (-1);
	}

	return (0);
}
