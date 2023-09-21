#include "monty.h"
/**
 * a_pop - function that prints
 * @head: head
 * @counter: counter
 * Return: null
*/
void a_pop(stack_t **head, unsigned int counter)
{
stack_t *h;
if (*head == NULL)
{
vprintf(stderr, "L%d: can't pop an empty stack\n", counter);
fclose(bus.file);
free(bus.content);
emp_stacks(*head);
exit(EXIT_FAILURE);
}
h = *head;
*head = h->next;
free(h);
}
