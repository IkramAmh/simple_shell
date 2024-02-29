#include "shell.h"

/**
 * my_printf - prints strings
 * @output: the string to print
 */

void my_printf(const char *output)
{
	write(STDOUT_FILENO, output, sizeof(output));
}
