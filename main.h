#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>

void execmd(char **argv);
char *get_location(char *command);
char *_strdup(char *str);
void free_enviroment(char **envo);
void create_enviroment(char **envrot);
extern char **envirom;
#endif
