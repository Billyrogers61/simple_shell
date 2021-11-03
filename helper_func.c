#include <stdio.h>
#include "main.h"

/**
 * get_cmd - a function to get a command from user.
 *
 * Return: nothing
 */
void get_cmd(void)
{
	 printf("Shell>\t");
	 fgets(cmd, MAX_SIZE_CMD, stdin);
	 if ((strlen(cmd) > 0) && (cmd[strlen(cmd) - 1] == '\n'))
		 cmd[strlen(cmd) - 1] = '\0';
/* prinf("%s/n", cmd); */
}
Void convert_cmd(void)
{

}
