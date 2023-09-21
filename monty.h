#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - functions with variables
 * @arg: argument
 * @file: file
 * @content: content
 * @lifi: lifi
 * Description: function that carries through
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void a_push(stack_t **head, unsigned int number);
void a_pall(stack_t **head, unsigned int number);
void a_pint(stack_t **head, unsigned int number);
int exec_opp(char *content, stack_t **head, unsigned int counter, FILE *file);
void emp_stacks(stack_t *head);
void a_pop(stack_t **head, unsigned int counter);
void a_stack(stack_t **head, unsigned int counter);
void a_add(stack_t **head, unsigned int counter);
void a_nop(stack_t **head, unsigned int counter);
void a_stack(stack_t **head, unsigned int counter);
void a_div(stack_t **head, unsigned int counter);
void a_mul(stack_t **head, unsigned int counter);
void a_mod(stack_t **head, unsigned int counter);
void a_pchar(stack_t **head, unsigned int counter);
void a_pstr(stack_t **head, unsigned int counter);
void a_rotl(stack_t **head, unsigned int counter);
void a_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void plusnodes(stack_t **head, int n);
void pluque(stack_t **head, int n);
void a_queue(stack_t **head, unsigned int counter);
void a_stack(stack_t **head, unsigned int counter);
#endif
