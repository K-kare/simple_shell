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
execlp(command, command, (char *)NULL);
zef_print("Error executing\n");
exit(EXIT_SUCCESS);
}
else
{
wait(NULL);
}
}
