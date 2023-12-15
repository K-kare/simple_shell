#ifndef SHELL_H
#define SHELL_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
void zef_print(const char *word);
void command_line(void);
void effect_command(void);
void input_command(char *command, size_t size);
void exit_func(void);
#endif
