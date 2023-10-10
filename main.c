#include "shell.h"

/**
 * main - Entry point for a simple shell program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int ac, char **argv)
{
	char *line = NULL;
	char **command = NULL;
	int status = 0;
	(void)ac;

	while (1)
	{
		line = read_the_line();
		if (line == NULL)
		{ /* Reached EOF (Ctrl + D) */
			if (isatty(STDIN_FILENO))
			{
				write(STDOUT_FILENO, "\n", 1);
			}
			return status;
		}

		command = tokenizer(line);
		if (!command)
		{
			continue;
		}

		status = execute_(command, argv);
	}
	return 0;
}

