#include "main.h"
/**
 * environment-Print the current environment.
 * @argv: array of string.
 */
void environment(char **argv)
{
	if (strcmp(argv[0], "env") == 0)
	{ /*Print the current environment*/
		char **env = environ;

		while (*env != NULL)
		{
			printf("%s\n", *env);
			env++;
		}
	}
}
