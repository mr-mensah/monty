#include "monty.h"
/**
 * monty_errorprint - function to prints errors
 * Return: EXIT_FAILURE
 */
int monty_errorprint(void)
{
fprintf(stderr, "USAGE: monty file\n");
return (EXIT_FAILURE);
}
/**
 * monty_createrror - function to print errors
 * Return: EXIT_FAILURE
 */
int monty_createrror(void)
{
fprintf(stderr, "Error: malloc failed\n");
return (EXIT_FAILURE);
}
/**
 * fileside_errors - function to print error messages
 * @filename: filename
 * Return: EXIT_FAILURE
 */
int fileside_errors(char *filename)
{
fprintf(stderr, "Error: Can't open file %s\n", filename);
return (EXIT_FAILURE);
}
/**
 * ready_errorprint - functionto add error messages
 * @opcode: argument
 * @line_number: filename
 * Return: EXIT_FAILURE
 */
int ready_errorprint(char *opcode, unsigned int line_number)
{
fprintf(stderr, "L%u: unknown instruction %s\n",
line_number, opcode);
return (EXIT_FAILURE);
}
/**
 * senderror_print - function to print errors
 * @line_number: filename
 * Return: EXIT_FAILURE
 */
int senderror_print(unsigned int line_number)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
return (EXIT_FAILURE);
}
