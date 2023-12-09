#include "main.h"

/**
 * execmd- this function to execude the command.
 * @argv: array of string.
*/
void execmd(char **argv)
{
char *command = NULL, *actual_command = NULL;

if (argv)
{
command = argv[0];
actual_command = get_location(command);

if (execve(actual_command, argv, NULL) == -1)
{
perror("Error: ");
}

}

}
