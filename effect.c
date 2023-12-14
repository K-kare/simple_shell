#include "shell.h"
/**
*effect_command - function to execute prompt
*@command: pointer to string with command
*Return: NULL
*/
void effect_command(const char *command)
{
pid_t childpid = fork();
if (childpid == -1)
{
perror("error");
exit(EXIT_FAILURE);
}
else if (childpid == 0)
{
char *buffer[128];
int arg_count = 0;
char *token = strtok((char *)command, " ");
while (token != NULL)
{
buffer[arg_count++] = token;
token = strtok(NULL, " ");
}
buffer[arg_count] = NULL;
execvp(buffer[0], buffer);
zef_print("Error executing\n");
exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}
