#include "main.h"
/**
 *main - Entry point
 *@ac: integer variable that stores the number of command-line arguments.
 *@argv: is an array of character pointers listing all the arguments.
 *Return: Always 0 (Success)
 */
int main(int ac, char **argv)
{
	char *lineptr = NULL, *lineptr_copy = NULL;
	size_t n = 0;
	const char *delim = " \n";
	int num_tokens = 0;
	char *token;
	int i;
	(void)ac;
	while (1)
	{
		if (validate_command(&lineptr, &n, &lineptr_copy) == -1)
		{
			break;
		}
		strcpy(lineptr_copy, lineptr);
		token = strtok(lineptr, delim);
		while (token != NULL)
		{
			num_tokens++;
			token = strtok(NULL, delim);
		}
		num_tokens++;
		argv = malloc(sizeof(char *) * num_tokens);
		token = strtok(lineptr_copy, delim);
		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(token));
			strcpy(argv[i], token);
			token = strtok(NULL, delim);
		}
		argv[i] = NULL;
		exitShell(argv);
		environment(argv);
		execmd(argv);
		}
	free(lineptr_copy);
	free(lineptr);
	return (0);
}
