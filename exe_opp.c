#include "monty.h"
/**
* exec_opp - functon that calls opcodes
* @stack: stack
* @counter: line
* @file: file
* @content: content
* Return: null
*/
int exec_opp(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
instruction_t opst[] = {
{"push", a_push},
{"pall", a_pall},
{"pint", a_pint},
{"pop", a_pop},
{"swap", a_stack},
{"add", a_add},
{"nop", a_nop},
{"sub", a_stack},
{"div", a_div},
{"mul", a_mul},
{"mod", a_mod},
{"pchar", a_pchar},
{"pstr", a_pstr},
{"rotl", a_rotl},
{"rotr", a_rotr},
{"queue", a_queue},
{"stack", a_stack},
{NULL, NULL}
};
unsigned int i = 0;
char *op;
op = strtok(content, " \n\t");
if (op && op[0] == '#')
return (0);
bus.arg = strtok(NULL, " \n\t");
while (opst[i].opcode && op)
{
if (strcmp(op, opst[i].opcode) == 0)
{	opst[i].f(stack, counter);
return (0);
}
i++;
}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		emp_stacks(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
