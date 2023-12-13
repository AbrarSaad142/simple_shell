#include "MAIN.h"

/**
 * create_enviroment - Create the array of Enviroment Variables
 * @envrot: Array to store Enviroment Variables
 */

void create_enviroment(char **envrot)
{
	int i;

	for (i = 0; envirom[i]; i++)
		envrot[i] = _strdup(envirom[i]);
		envrot[i] = NULL;
}

/**
 * free_enviroment - Free up the memory of the created array of Enviroment Variables
 * @envo:  Array of Environment variables
 */
void free_enviroment(char **envo)
{
	int j;

	for (j = 0; envo[j]; j++)
	{
		free(envo[j]);
	}
}


