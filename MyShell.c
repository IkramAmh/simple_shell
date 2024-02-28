#include "shell.h"

/**
 * main - displays a simple shell
 *
 * Return: 0 on success.
 */

int main(void)
{
	char cmd[200];

	while (1)
	{
		my_printf("My_Shell$ ");
		get_command(cmd, sizeof(cmd));
		execute_command(cmd);
	}
	return (0);
}
