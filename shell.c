#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to the main function.
 *
 * Description: Main function.
 * Return: 0 if scuccessful.
 */

int main(void)
{
	/* tie the handler to the SGNCHILD signal */
	signal(SIGCHILD, log_handle);
	/* starts the shell */
	c_shell();
	return (0);
}
