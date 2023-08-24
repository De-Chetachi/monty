#include "monty.h"

global_t glob;

void glob_init(FILE *Fptr)
{
	glob.buff = NULL;
	glob.av = NULL;
	glob.monty_file = Fptr;
	glob.line_number = 0;
	glob.opd_ac = 0;
	glob.head = NULL;
}

FILE *file_open(int ac, char **argv)
{
	FILE *fr;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fr = fopen(argv[1], "r");

	if (fr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	return (fr);
}

void read_line(void)
{
	ssize_t bytes = 1;
	size_t n;
	int tok_len;
	void (*ins)(stack_t **stack, unsigned int line_number);

	while (bytes != -1)
	{
		bytes = getline(&glob.buff, &n, glob.monty_file);
		glob.line_number++;
		glob.av = tok_str(glob.buff, " \t\n", &tok_len);
		glob.opd_ac = tok_len - 1;

		if (glob.opd_ac == 0)
		{
			free_double(glob.av);
			continue;
		}
		if (glob.av[0][0] == '#')
		{
			free_double(glob.av);
			continue;
		}
		
		ins = opcode_cmp(glob.av[0]);

		if (ins == NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", glob.line_number, glob.av[0]);
			free_stack_t(glob.head);
			free_double(glob.av);
			free(glob.buff);
			exit(EXIT_FAILURE);
		}
		ins(&glob.head, glob.line_number);
		free_double(glob.av);
		/*free(glob.buff);*/
	}
	free_stack_t(glob.head);
	free(glob.buff);
}

int main(int argc, char **argv)
{
	FILE *Fptr;

	Fptr = file_open(argc, argv);

	glob_init(Fptr);

	read_line();
	/*free_stack_t(glob.head);*/
	fclose(glob.monty_file);

	return (0);
}
