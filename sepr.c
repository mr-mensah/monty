#include "monty.h"
/**
 * a_div - function that divides
 * @head: head
 * @counter: line
 * Return: null
*/
void a_div(stack_t **head, unsigned int counter)
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
vprintf(stderr, "L%d: can't div, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
emp_stacks(*head);
exit(EXIT_FAILURE);
}
h = *head;
if (h->n == 0)
{
vprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
emp_stacks(*head);
exit(EXIT_FAILURE);
}
aux = h->next->n / h->n;
h->next->n = aux;
*head = h->next;
free(h);
}