#ifndef SHELL_H
#define SHELL_H

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include<sys/wait.h>

void my_printf(const char *output);
void get_command(char *cmd, size_t n);
void execute_command(char *const cmd);

#endif
