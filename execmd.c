#include "main.h"

/**
 * execmd- this function to execude the command.
 * @argv: array of string.
 */
void execmd(char **argv)
{
pid_t pid = fork();

if (pid < 0)
{
perror("fork");
exit(EXIT_FAILURE);
}
else if (pid == 0)
{
/*Child process*/
char *command = NULL, *actual_command = NULL;

if (argv)
{
command = argv[0];
actual_command = get_location(command);

if (actual_command == NULL)
{
fprintf(stderr, "Command not found: %s\n", command);
exit(EXIT_FAILURE);
}

if (execve(actual_command, argv, NULL) == -1)
{
perror("execve");
exit(EXIT_FAILURE);
}
}
}
else
{
/*Parent process*/
int status;
waitpid(pid, &status, 0);
/* You can add additional logic for handling the exit status if needed.*/
}
}
