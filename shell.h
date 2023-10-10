#ifndef SHELL_H
#define SHELL_H

/**
 * This is the shell header file.
 * It contains the function prototypes and necessary includes for the shell.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>

#define DELIM " \t\n"

/**
 * Function to read a line from the input (stdin).
 * @return A pointer to the read line.
 */
char *read_the_line(void);

/**
 * Function to duplicate a string (similar to strdup).
 * @param str The input string.
 * @return A pointer to the duplicated string.
 */
char *_strdup(const char *str);

/**
 * Function to compare two strings.
 * @param s1 The first string.
 * @param s2 The second string.
 * @return The comparison result.
 */
int _strcmp(char *s1, char *s2);

/**
 * Function to calculate the length of a string.
 * @param s The input string.
 * @return The length of the string.
 */
int _strlen(char *s);

/**
 * Function to concatenate two strings.
 * @param dest The destination string.
 * @param src The source string.
 * @return The concatenated string.
 */
char *_stecat(char *dest, char *src);

/**
 * Function to copy a string.
 * @param dest The destination string.
 * @param src The source string.
 * @return The copied string.
 */
char *_strcpy(char *dest, char *src);

/**
 * Function to tokenize a line into an array of strings.
 * @param line The input line.
 * @return An array of tokens.
 */
char **tokenizer(char *line);

extern char **environ;

/**
 * Function to free a 2D array of strings.
 * @param arr The array to be freed.
 */
void free2Darray(char **arr);

/**
 * Function to execute a command.
 * @param command The command to be executed.
 * @param argv The argument vector.
 * @return The exit status of the executed command.
 */
int execute_(char **command, char **argv);

#endif
extern char **environ;

/**
 * Function to free a 2D array of strings.
 * @param arr The array to be freed.
 */
void free2Darray(char **arr);

/**
 * Function to execute a command.
 * @param command The command to be executed.
 * @param argv The argument vector.
 * @return The exit status of the executed command.
 */
int execute_(char **command, char **argv);

#endif
