#include "shell.h"
/**
*effect_command - function to execute prompt
*@command: pointer to string with command
*Return: NULL
*/
void effect_command(void)
{
pid_t childpid = fork();
if (childpid == -1)
{
perror("error");
exit(EXIT_FAILURE);
}
else if (childpid == 0)
{
char *command[] = {"ls", "-l", NULL};
char *envp[] = {"NULL"}; 
if (execve("/usr/bin/ls", command, envp) == -1)
{
zef_print("EXECLP");
exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}
}
