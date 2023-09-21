#include "monty.h"
/**
* emp_stacks - function that empties stacks
* @head: head
*/
void emp_stacks(stack_t *head)
{
stack_t *aux;
aux = head;
while (head)
{
aux = head->next;
free(head);
head = aux;
}
}
