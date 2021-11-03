#include <stdio.h>
#include "main.h"

/**
 * get_cmd - a function to get a command from user.
 *
 * Return: nothing
 */
void get_cmd(void)
{

	char cmd[MAX_SIZE_CMD];
	printf("Shell>\t");
	fgets(cmd, MAX_SIZE_CMD, stdin);
	if ((strlen(cmd) > 0) && (cmd[strlen(cmd) - 1] == '\n'))
		cmd[strlen(cmd) - 1] = '\0';
/* prinf("%s/n", cmd); */
}

Void convert_cmd(void)
{

	char *argv[MAX_SIZE_ARG];
	char = i;
	char *ptr;
	i = 0;
	ptr = strtok(cmd, " ");

	while(ptr != NULL)
	{
		argv[i] = ptr;
		i++;
		ptr = strtok(NULL, " ");
	}

	if (!strcmp("&", argv[i-1]))
	{
		argv[i-1] = NULL;
		argv[i] = "&";
	}
	else
	{
		argv[i] = NULL;
	}
}
void log_handle(int sig)
{
	FILE *pFile;
	pFile = fopen("log.txt", "a");
	if(pFile == NULL) perror("Error opening file.");
	else fprintf(pFile, "[LOG] child process terminated.\n");
	fclose(pFile);
}
