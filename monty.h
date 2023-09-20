#ifndef __MONTY_H__
#define __MONTY_H__
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
extern char **op_toks;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
#define IMONTY_STACK 0
#define IMONTY_QUEUE 1
#define IMONTY_DELIMS " \n\t\a\b"
int monty_errorprint(void);
int monty_createrror(void);
int fileside_errors(char *filename);
int ready_errorprint(char *opcode, unsigned int line_number);
int senderror_print(unsigned int line_number);
int print_correrrors(unsigned int line_number);
int print_empterror(unsigned int line_number);
int print_interrors(unsigned int line_number, char *op);
int print_seperrors(unsigned int line_number);
void error_optstoke(int err_code);
char *char_intgetter(int n);
unsigned int value_abso(int);
int buffleng(unsigned int num, unsigned int base);
void buff_fill(unsigned int num, unsigned int base,
char *buff, int buff_size);
void amonty_noth(stack_t **stack, unsigned int line_number);
void amonty_pri(stack_t **stack, unsigned int line_number);
void amonty_tip(stack_t **stack, unsigned int line_number);
void amonty_del(stack_t **stack, unsigned int line_number);
void amonty_force(stack_t **stack, unsigned int line_number);
void amonty_switch(stack_t **stack, unsigned int line_number);
int main(int argc, char **argv)
void fremymonty(stack_t **stack);
int montystart(stack_t **stack);
int montyent(stack_t *stack);
void free_monttokes(void);
unsigned int monttokenlength(void);
int monty_newline(char *line, char *delims);
int execute_montys(FILE *script_fd);
char **spsw(char *str, char *delims);
int monty_idelim(char ch, char *delims);
int montycharlen(char *str, char *delims);
int montycharcount(char *str, char *delims);
char *montynextchar(char *str, char *delims);
void imonty_add(stack_t **stack, unsigned int line_number);
int printer_pcharerrors(unsigned int line_number, char *message);
#endif
