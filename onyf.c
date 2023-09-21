#include "monty.h"
/**
  *a_sub- function that subtracts
  *@head: head
  *@counter: counter
  *Return: null
 */
void a_sub(stack_t **head, unsigned int counter)
{
stack_t *aux;
int sus, nodes;
aux = *head;
for (nodes = 0; aux != NULL; nodes++)
aux = aux->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
emp_stacks(*head);
exit(EXIT_FAILURE);
}
aux = *head;
sus = aux->next->n - aux->n;
aux->next->n = sus;
*head = aux->next;
free(aux);
}
