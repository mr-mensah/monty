#include "monty.h"
/**
 * amonty_del - function that deletes from the top
 * @stack: stack
 * @line_number: line number
 */
void amonty_del(stack_t **stack, unsigned int line_number)
{
stack_t *next = NULL;
if ((*stack)->next == NULL)
{
error_optokens(printer_poperrors(line_number));
return;
}
next = (*stack)->next->next;
free((*stack)->next);
if (next)
next->prev = *stack;
(*stack)->next = next;
}
