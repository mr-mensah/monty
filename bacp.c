#include "monty.h"
/**
 * a_pint - function that prints
 * @head: head
 * @counter: counter
 * Return: null
*/
void a_pint(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
fclose(bus.file);
free(bus.content);
emp_stacks(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
