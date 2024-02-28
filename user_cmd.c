#include "shell.h"

/**
 * get_command - gets the user's command
 * @cmd: the command to get
 * @n: the size of the command
 */

void get_command(char *cmd, size_t n)
{
	if (fgets(cmd, n, stdin) == NULL)
	{
		if (feof(stdin))
		{
			my_printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("fgets");
			exit(EXIT_FAILURE);
		}
	}
	cmd[strcspn(cmd, "\n")] = '\0';
}
