#include "shell.h"

/**
 * execute_command - executes the command gotten
 * @cmd: the command gotten by the user
 */

void execute_command(char *cmd)
{
	pid_t child_pid = fork();
	char cmd_path[200];
	char *args[] = {cmd, NULL};

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		snprintf(cmd_path, sizeof(cmd_path), "/bin/%s", cmd);
		execve(cmd_path, args, NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait;
	}
}
