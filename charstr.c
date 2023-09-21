#include "monty.h"
/**
 * a_pchar - function that prints strings
 * @head: head
 * @counter: counter
 * Return: null
*/
void a_pchar(stack_t **head, unsigned int counter)
{
stack_t *h;
h = *head;
if (!h)
{
vprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
fclose(bus.file);
free(bus.content);
emp_stacks(*head);
exit(EXIT_FAILURE);
}
if (h->n > 127 || h->n < 0)
{
vprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
fclose(bus.file);
free(bus.content);
emp_stacks(*head);
exit(EXIT_FAILURE);
}
printf("%c\n", h->n);
}
