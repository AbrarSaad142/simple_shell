#include "main.h"

/**
 * main - Entry point
 * @ac: integar variable that stores the number of command line arguments
 * @argv: an array of charachter pointers listing all the arguments
 * return: Always 0 (Success)
 */

int main() {
	char input [MAX_INPUT_SIZE];
while(1){
	printf("USERshell > ");
	fflush(stdout);
//Read user input
if(fgets(input, MAX_SIZE_INPUT, stdin) == NULL{
		printf("\n");
		break;
		}
//Remove newline from user's input
input[strcspn(input, "\n")] = '\0';
//Tookenize the inupt to get commands and arguments
char *args[MAX_ARGS];
char *token = strtok(input, " ");
int i = 0;
while (token != NULL && i<MAX_ARGS -1) {
args[i++] = token;
token = strtok(NULL, " ");
}
//Last element is set to null for execvp function
args[i] = NULL;
//check if command exists in PATH
if(access(args[0], X_OK) == -1) {
printf("ERROR!");
continue;
}
//fork a child process
pid_t pid = fork();
if(pid<0){
	perror("fork failure");
	exit(EXIT_FAILURE);
}
elseif(pid == 0){
	if(execvp(args[0], args) == -1){
		printf("ERROR!\n");
		exit(EXIT_FAILURE);
	}
}
else{
	int status;
	waitpid(pid, &status, 0);
}
}
return 0;
}
