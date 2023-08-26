#include "monty.h"

void (*opcode_cmp(char *opcode))(stack_t **head, unsigned int line_number)
{
	int i = 0;
	instruction_t ins[20];

	ins[0].opcode = "push", ins[0].f = monty_push;
	ins[1].opcode = "pall", ins[1].f = monty_pall;
	ins[2].opcode = "pint", ins[2].f = monty_pint;
	ins[3].opcode = "pop", ins[3].f = monty_pop;
	ins[4].opcode = "swap", ins[4].f = monty_swap;
	ins[5].opcode = "add", ins[5].f = monty_add;
	ins[6].opcode = "sub", ins[6].f = monty_sub;
	ins[7].opcode = "mul", ins[7].f = monty_mul;
	ins[8].opcode = "div", ins[8].f = monty_div;
	ins[9].opcode = "mod", ins[9].f = monty_mod;
	/*{"comments", &monty_comments},*/
	ins[10].opcode = "pchar", ins[10].f = monty_pchar;
	ins[11].opcode = "pstr", ins[11].f = monty_pstr;
	ins[12].opcode = "rotl", ins[12].f = monty_rotl;
	ins[13].opcode = "rotr", ins[13].f = monty_rotr;
	ins[14].opcode = "nop", ins[14].f = monty_nop;
	ins[15].opcode = "queue", ins[15].f = monty_queue;
	ins[16].opcode = "stack", ins[16].f = monty_stack;
	ins[17].opcode = NULL, ins[17].f = NULL;

	while(ins[i].opcode)
	{
		if (strcmp(opcode, ins[i].opcode) == 0)
		{
			break;
		}
		i++;
	}
	return (ins[i].f);
}
