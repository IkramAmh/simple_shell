#include "shell.h"

void my_printf(const char *output)
{
	write(STDOUT_FILENO, output, sizeof(output));
}	
