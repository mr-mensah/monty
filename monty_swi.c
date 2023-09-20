#include "monty.h"
/**
 * amonty_switch - function that switches
 * @stack: stack
 * @line_number: line number
 */
void amonty_switch(stack_t **stack, unsigned int line_number)
{
stack_t *tmpe;
if ((*stack)->next == NULL || (*stack)->next->next == NULL)
{
error_optokens(printer_matherrors(line_number, "swap"));
return;
}
tmpe = (*stack)->next->next;
(*stack)->next->next = tmpe->next;
(*stack)->next->prev = tmpe;
if (tmpe->next)
tmpe->next->prev = (*stack)->next;
tmpe->next = (*stack)->next;
tmpe->prev = *stack;
(*stack)->next = tmpe;
}
