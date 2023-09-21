#include "monty.h"
/**
 * a_pstr - function that prints
 * @head: head
 * @counter: counter
 * Return: null
*/
void a_pstr(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;
h = *head;
while (h)
{
if (h->n > 127 || h->n <= 0)
{
break;
}
printf("%c", h->n);
h = h->next;
}
printf("\n");
}
