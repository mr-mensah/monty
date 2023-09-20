#include "monty.h"
/**
 * amonty_pri - function to print monty things
 * @stack: stack
 * @line_number: line number
 */
void amonty_pri(stack_t **stack, unsigned int line_number)
{
stack_t *tmpe = (*stack)->next;
while (tmpe)
{
printf("%d\n", tmpe->n);
tmpe = tmpe->next;
}
(void)line_number;
}
