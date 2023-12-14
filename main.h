#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
extern char **environ;

void execmd(char **argv);
char *get_location(char *command);
void exitShell(char **argv);
void environment(char **argv);
int validate_command(char **lineptr, size_t *n, char **lineptr_copy);
int _putchar(char c);

#endif
