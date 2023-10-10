#include "shell.h"

/**
 * execute_ - Execute a command in a child process.
 * @command: The command to execute.
 * @argv: The argument vector.
 *
 * Return: The exit status of the executed command.
 */
int execute_(char **command, char **argv)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		/*Child process*/
		if (execve(command[0], command, environ) == -1)
		{
			perror(argv[0]);
			free2Darray(command);
			exit(0);
		}
	}
	else
	{
		/*Parent process*/
		waitpid(child, &status, 0);
		free2Darray(command);
	}

	return WEXITSTATUS(status);
}

