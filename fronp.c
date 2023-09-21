#include "monty.h"
/**
 * a_pall - function that prints
 * @head: head
 * @counter: counter
 * Return: null
*/
void a_pall(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;
h = *head;
if (h == NULL)
return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
