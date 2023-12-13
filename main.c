#include "shell.h"
/**
*main - main function
*Return: always 0 (success)
*/
int main(void)
{
char command[128];
int i;
for (i = 0; (i = 1); i++)
{
command_line();
input_command(command, sizeof(command));
effect_command(command);
}
return (0);
}
