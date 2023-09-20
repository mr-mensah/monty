#include "monty.h"
#include <string.h>
/**
 * fremymonty - function to free monty
 * @stack: stack
 */
void fremymonty(stack_t **stack)
{
stack_t *tmpe = *stack;
while (*stack)
{
tmpe = (*stack)->next;
free(*stack);
*stack = tmpe;
}
}
/**
 * montystart - function that starts monty
 * @stack: stack
 * Return: EXIT_SUCCESS.
 */
int montystart(stack_t **stack)
{
stack_t *a;
a = malloc(sizeof(stack_t));
if (a == NULL)
return (monty_mallocerror());
a->n = IMONTY_STACK;
a->prev = NULL;
a->next = NULL;
*stack = a;
return (EXIT_SUCCESS);
}
/**
 * montyent - function that enters monty
 * @stack: stack
 * Return: 2.
 */
int montyent(stack_t *stack)
{
if (stack->n == IMONTY_STACK)
return (IMONTY_STACK);
else if (stack->n == IMONTY_QUEUE)
return (IMONTY_QUEUE);
return (2);
}
