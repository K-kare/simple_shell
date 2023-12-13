#include "shell.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
/**
*zef_print - function to print on the prompt
*@word: contains string to be printed
*Return: Null
*/
void zef_print(const char *word)
{
write(STDOUT_FILENO, word, strlen(word));
}
