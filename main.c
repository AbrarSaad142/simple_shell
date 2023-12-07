#include "main.h"

/**
* main - Entry point
* @ac: integer variable that stores the number of command-line arguments.
* @argv: is an array of character pointers listing all the arguments.
* Return: Always 0 (Success)
*/
int main(int ac, char **argv)
{
<<<<<<< HEAD
char *prompt = "(Ashell)$";
char *linetr;
size_t n = 0;
ssize_t our_var; /*variable for getline function*/
(void)ac; (void)argv; /*void variables*/

while(1){
printf("%s", prompt);
our_var = getline(&lineptr, &n, &stdin);/*check if getline function failed*/
if(our_var == -1) {
	printf("ERROR!...");/*error message if function failed*/
	return(-1);
}
printf("%s\n", lineptr);
free(lineptr);/*free-up allocated memory*/
}
return (0);
=======
	char *prompt = "(Ashell)$";

	printf("%s", prompt);
	return (0);
>>>>>>> 90a60680530ee8b0ca3121b7f1b78f300ce154b4
}
