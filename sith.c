#include "monty.h"
/**
 * a_swap - function that swaps
 * @head: head
 * @counter: counter
 * Return: null
*/
void a_swap(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, aux;
h = *head;
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
vprintf(stderr, "L%d: can't swap, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
emp_stacks(*head);
exit(EXIT_FAILURE);
}
h = *head;
aux = h->n;
h->n = h->next->n;
h->next->n = aux;
}