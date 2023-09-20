#include "monty.h"
/**
 * amonty_tip - function that goes to the top
 * @stack: stack
 * @line_number: line number
 */
void amonty_tip(stack_t **stack, unsigned int line_number)
{
if ((*stack)->next == NULL)
{
error_optokens(printer_pinterror(line_number));
return;
}
printf("%d\n", (*stack)->next->n);
}
