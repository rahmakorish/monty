#include "monty.h"
/**
 *main-entry point for monty file interperator
 *@argc:argument count
 *@argv:argument vector
 *Return:0success
 **/
int main(int argc, char **argv)
{
	FILE *montyfile;
	char buffer[1024];
	char *token;

	if (argc < 2)
	{
		perror("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	else
	{
	montyfile = fopen(argv[1], "r");
	if (!montyfile)
	{
		perror("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	while (fgets(buffer, sizeof(buffer), montyfile))
	{
		token = strtok(buffer, " ");
		printf("%s\n", token);
	}
	fclose(montyfile);
	return (EXIT_SUCCESS);
	}
}
