#include "shell.h"

/**
 * my_printf - prints strings
 */

void my_printf(const char *output)
{
	write(STDOUT_FILENO, output, sizeof(output));
}
