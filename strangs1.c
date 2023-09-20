#include "monty.h"
#include <string.h>
/**
 * free_monttokes - function that frees monty
 */
void free_monttokes(void)
{
size_t k = 0;
if (op_toks == NULL)
return;
for (k = 0; op_toks[k]; k++)
free(op_toks[k]);
free(op_toks);
}
/**
 * monttokenlength - function to get monty length.
 * Return: length
 */
unsigned int monttokenlength(void)
{
unsigned int toks_len = 0;
while (op_toks[toks_len])
toks_len++;
return (toks_len);
}
/**
 * monty_newline- function to check delimiting char from getline.
 * @line: line
 * @delims: argument
 * Return: 0
 */
int monty_newline(char *line, char *delims)
{
int k, i;
for (k = 0; line[k]; k++)
{
for (i = 0; delims[i]; i++)
{
if (line[k] == delims[i])
break;
}
if (delims[i] == '\0')
return (0);
}
return (1);
}
/**
 * monty_getop - function that finds opcode
 * @opcode: opcode
 * Return: null
 */
void (*monty_getop(char *opcode))(stack_t**, unsigned int)
{
instruction_t _getop[] = {
{"push", imonty_push},
{"pall", imonty_pall},
{"pint", imonty_pint},
{"pop", imonty_pop},
{"swap", imonty_swap},
{"nop", imonty_nop},
{NULL, NULL}
};
int k;
for (k = 0; _getop[k].opcode; k++)
{
if (strcmp(opcode, _getop[k].opcode) == 0)
return (_getop[k].f);
}
return (NULL);
}

/**
 * execute_montys - function that does monty
 * @monty_fd: argument
 * Return: exit
 */
int execute_montys(FILE *monty_fd)
{
stack_t *stack = NULL;
char *line = NULL;
size_t len = 0, exit_status = EXIT_SUCCESS;
unsigned int line_number = 0, prev_tok_len = 0;
void (*_getop)(stack_t**, unsigned int);
if (montyinit(&stack) == EXIT_FAILURE)
return (EXIT_FAILURE);
while (getline(&line, &len, monty_fd) != -1)
{
line_number++;
op_toks = strtow(line, IMONTY_DELIMS);
if (op_toks == NULL)
{
if (monty_newline(line, IMONTY_DELIMS))
continue;
freedmonty(&stack);
return (monty_mallocerror());
}
else if (op_toks[0][0] == '#')
{
free_monttokes();
continue;
}
_getop = monty_getop(op_toks[0]);
if (_getop == NULL)
{
freedmonty(&stack);
exit_status = unknown_errorprinter(op_toks[0], line_number);
free_monttokes();
break;
}
prev_tok_len = monttokenlength();
_getop(&stack, line_number);
if (monttokenlength() != prev_tok_len)
{
if (op_toks && op_toks[prev_tok_len])
exit_status = atoi(op_toks[prev_tok_len]);
else
exit_status = EXIT_FAILURE;
free_monttokes();
break;
}
free_monttokes();
}
freedmonty(&stack);
if (line && *line == 0)
{
free(line);
return (monty_mallocerror());
}
free(line);
return (exit_status);
}
