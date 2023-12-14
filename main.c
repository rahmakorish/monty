#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#define  _GNU_SOURCE
/*
char *readline()
{
	char *line = NULL;
	size_t len = 0;
	int nread;

	nread = getline(&line, &len, stdin);
	if (nread == -1)
	{
		free(line);
		return (NULL);
	}

	if (nread > 0 && line[nread - 1] == '\n')
		line[nread - 1] = '\0';

	return (line);
}*/
int main(int argc, char **argv)
{
	FILE *montyfile;
	char buffer[1024]; char* token;

	if (argc < 2)
	{		
		perror("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	else 
	{
	montyfile = fopen(argv[1],"r");	
	if (!montyfile)
	{
		perror("USAGE: monty file\n");
                return (EXIT_FAILURE);
	}
	while (fgets(buffer, sizeof(buffer),montyfile))
	{
		token = strtok(buffer," ");
			printf("%s\n",token);
	}
	fclose(montyfile);	
	return (EXIT_SUCCESS);

	}
}
