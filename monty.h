#ifndef MONTY_H
#define MONTY_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue) * @next: points to the next element of the stack (or queue)
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

/**
 * struct global - global variables
 * @buff: the opcode
 * @av: function to handle the opcode
 * @monty_file: ttitj
 * @line_number
 * @head: hjkj
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct global
{
        char *buff;
	char **av;
	FILE *monty_file;
	unsigned int line_number;
	int opd_ac;
	stack_t *head;
} global_t;

FILE *file_open(int ac, char **argv);
void glob_init(FILE *Fptr);
extern global_t glob;
void read_line(void);
int tok_len(char *str, char *delim);
char **tok_str(char *str, char *delim, int *tok_size);
char *strchr_str(char *fruit, char *seeds);
void (*opcode_cmp(char *opcode))(stack_t **head, unsigned int line_number);

/**/

void stack_add(stack_t **top);
void monty_push(stack_t **head, unsigned int line_number);
void stack_ele_add(stack_t **head);
void monty_add(stack_t **head, unsigned int line_number);
void monty_nop(stack_t **head, unsigned int line_number);
void stack_ele_div(stack_t **head, unsigned int line_number);
void monty_div(stack_t **top, unsigned int line_number);
void stack_ele_mod(stack_t **head, unsigned int line_number);
void monty_mod(stack_t **top, unsigned int line_number);
void stack_ele_mul(stack_t **head);
void monty_mul(stack_t **top, unsigned int line_number);
void stack_ele_sub(stack_t **head);
void monty_sub(stack_t **top, unsigned int line_number);
int stack_len(stack_t *top);
void monty_pchar(stack_t **head, unsigned int line_number);
void stack_pop(stack_t **head);
void monty_pop(stack_t **head, unsigned int line_number);
void stack_print(stack_t **top);
void monty_pall(stack_t **head, unsigned int line_number);
void print_top(stack_t **head);
void monty_pint(stack_t **head, unsigned int line_number);
void monty_pstr(stack_t **top, unsigned int line_number);
void monty_rotl(stack_t **head, unsigned int line_number);
void monty_rotr(stack_t **head, unsigned int line_number);
void stack_swap(stack_t **head);
void monty_swap(stack_t **head, unsigned int line_number);
void free_double(char **vector);
void free_stack_t(stack_t *head);

#endif
