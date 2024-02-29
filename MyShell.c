#include "shell.h"

/**
 * main - displays a simple shell
 *
 * Return: 0 on success.
 */

int main(void)
{
	char cmd[200];
	size_t size;
	int n;

	while (cmd)
		n++;
	size = n * 8;
	while (1)
	{
		my_printf("My_Shell$ ");
		get_command(cmd, size);
		execute_command(cmd);
	}
	return (0);
}
