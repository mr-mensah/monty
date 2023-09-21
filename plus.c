#include "monty.h"
/**
 * a_add - function that adds elements
 * @head: head
 * @counter: line
 * Return: null
*/
void a_add(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
emp_stacks(*head);
exit(EXIT_FAILURE);
}
h = *head;
aux = h->n + h->next->n;
h->next->n = aux;
*head = h->next;
free(h);
}
