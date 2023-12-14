#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define  _GNU_SOURCE
char *readline()
{
	char *line = NULL;
	size_t len = 0;
	int nread;

	nread = getline(&line, &len, stdin);
	if (nread == -1)
	{
		/* Error or end of file */
		free(line);
		return (NULL);
	}

	/* Remove the trailing newline character, if it exists */
	if (nread > 0 && line[nread - 1] == '\n')
		line[nread - 1] = '\0';

	return (line);
}
int main(int argc, char **argv)
{
	/*FILE *montyfile;
	char buffer[1024];*/
	char *input;

	if (argc < 2)
	{		
		perror("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	else 
	{	printf("%s\n",argv[1]);
		input = readline();
		printf("input %s\n",input);
/*char *text = argv[1];
	montyfile = fopen(text,"r");	
	if (!montyfile)
	{
		perror("USAGE: monty file\n");
                return (EXIT_FAILURE);
	}*/	
	return (EXIT_SUCCESS);

	}
}
