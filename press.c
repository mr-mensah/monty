#include "monty.h"
/**
 * a_push - function that push node to the top
 * @head: head
 * @counter: counter
 * Return: no return
*/
void a_push(stack_t **head, unsigned int counter)
{
int n, j = 0, flag = 0;
if (bus.arg)
{
if (bus.arg[0] == '-')
j++;
for (; bus.arg[j] != '\0'; j++)
{
if (bus.arg[j] > 57 || bus.arg[j] < 48)
flag = 1; }
if (flag == 1)
{ fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
emp_stacks(*head);
exit(EXIT_FAILURE); }}
else
{ fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
emp_stacks(*head);
exit(EXIT_FAILURE); }
n = atoi(bus.arg);
if (bus.lifi == 0)
plusnodes(head, n);
else
pluque(head, n);
}
