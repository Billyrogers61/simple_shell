#ifndef MAIN_H
#define MAIN_H

/* header files */
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>


/* prototype functions */
void type_prompt(void);
void get_cmd(void);        /* Get command from the user */
void convert_cmd(void);   /* Convert the command string to the required fomart */
void c_shell(void);      /* Start the shell */
void log_handle(void);  /* signal handler to handle log statements */

#endif /* MAIN_H */
