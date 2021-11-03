#include <stdio.h>
#include "main.h"

#define MAX_SIZE_CMD 256
#define MAX_SIZE_ARG 16

/* declaration of variables */
char cmd[MAX_SIZE_CMD];
char *argv[MAX_SIZE_ARG];
pid_t pid;
char i;

/**
 * main - Entry point to the main function.
 *
 * Description: Main function.
 * Return: 0 if scuccessful.
 */

int main()
{
	/* tie the handler to the SGNCHILD signal */
	signal(SIGCHILD, log_handle);
	/* starts the shell */
	c_shell();
	return 0;
}
