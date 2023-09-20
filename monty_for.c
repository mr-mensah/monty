#include "monty.h"
void amonty_force(stack_t **stack, unsigned int line_number);
/**
 * amonty_force - function that pushes to the top
 * @stack: stack
 * @line_number: line number
 */
void amonty_force(stack_t **stack, unsigned int line_number)
{
stack_t *tmpe, *new;
int j;
new = malloc(sizeof(stack_t));
if (new == NULL)
{
error_optokens(monty_mallocerror());
return;
}
if (op_toks[1] == NULL)
{
error_optokens(pusherror_printer(line_number));
return;
}
for (j = 0; op_toks[1][j]; j++)
{
if (op_toks[1][j] == '-' && j == 0)
continue;
if (op_toks[1][j] < '0' || op_toks[1][j] > '9')
{
error_optokens(pusherror_printer(line_number));
return;
}
}
new->n = atoi(op_toks[1]);
if (montymode(*stack) == IMONTY_STACK)
{
tmpe = (*stack)->next;
new->prev = *stack;
new->next = tmpe;
if (tmpe)
tmpe->prev = new;
(*stack)->next = new;
}
else
{
tmpe = *stack;
while (tmpe->next)
tmpe = tmpe->next;
new->prev = tmpe;
new->next = NULL;
tmpe->next = new;
}
}
