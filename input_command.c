#include "shell.h"
/**
*input_command - function to receive user input
*@command: pointer to string containing user input
*@size: stores size of the command
*Return: void
*/
void input_command(char *command, size_t size)
{
if (fgets(command, size, stdin) == NULL)
{
if (feof(stdin))
{
zef_print("\n");
exit(EXIT_SUCCESS);
}
zef_print("Error while reading\n");
exit(EXIT_FAILURE);
}
command[strcspn(command, "\n")] = '\0';
}
