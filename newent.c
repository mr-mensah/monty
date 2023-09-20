#include "monty.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
char **op_toks = NULL;
/**
 * main - function of the first point
 * @argc: array
 * @argv: array
 * Return: exit_code
 */
int main(int argc, char **argv)
{
FILE *monty_fd = NULL;
int exit_code = EXIT_SUCCESS;
if (argc != 2)
return (monty_errorprinter());
monty_fd = fopen(argv[1], "r");
if (monty_fd == NULL)
return (fileopen_error(argv[1]));
exit_code = exe_monty(monty_fd);
fclose(monty_fd);
return (exit_code);
}
