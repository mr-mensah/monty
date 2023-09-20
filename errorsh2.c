#include "monty.h"
/**
 * print_correrrors - function that prints error messages
 * @line_number: line number
 * Return: EXIT_FAILURE
 */
int print_correrrors(unsigned int line_number)
{
fprintf(stderr, "L%u: Can't print an empty stack\n", line_number);
return (EXIT_FAILURE);
}
/**
 * print_empterror - function that prints error messages
 * @line_number: line number
 * Return: EXIT_FAILURE
 */
int print_empterror(unsigned int line_number)
{
fprintf(stderr, "L%d: Can't print, stack empty\n", line_number);
return (EXIT_FAILURE);
}
/**
 * print_interrors - funtion that prints int error messages
 * @line_number: line number
 * @op: argument
 * Return: EXIT_FAILURE
 */
int print_interrors(unsigned int line_number, char *op)
{
fprintf(stderr, "L%u: Can't print %s, stack too short\n", line_number, op);
return (EXIT_FAILURE);
}
/**
 * print_seperrors - function that prints division errors
 * @line_number: file number
 * Return: EXIT_FAILURE
 */
int print_seperrors(unsigned int line_number)
{
fprintf(stderr, "L%u: Division by zero\n", line_number);
return (EXIT_FAILURE);
}
