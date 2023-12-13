#include "main.h"
/**
 * exitShell-exit from the shell.
 * @argv: array of string.
*/
void exitShell(char **argv)
{
/*Check for the exit command*/
		if (strcmp(argv[0], "exit") == 0)
		{
			printf("Exiting the shell.\n");
			exit(1);
		}
}
