#include "monty.h"

/**
 * read_file - function that opens and read a file
 * @file: pointer to the file
 * Return: void
 **/

void read_file(char *filepath)
{
char **buffer = NULL, **tokens;
size_t buf_size = 0;
int line = 0;
stack_t *stack = NULL;
FILE *file;

file = fopen(filepath, "r");
if (file == -1)
{
    printf("Error: Can't open file {:s}", filepath);
    exit(EXIT_FAILURE); }

while (getline(&buffer, &buf_size, file) != -1)
{
line += 1;
tokens = tokenize_line(buffer);
if (tokens == NULL)
    continue;
else
{

}

}

}

char **tokenize_line(char *buffer)
{
char *token, **tokens;
unsigned int iterator = 0;

tokens = malloc(sizeof(char *) * 3);
if (tokens == NULL)
{
    free(tokens);
    exit(EXIT_FAILURE);
}
token = strtok(buffer, " '\n'");
	if (token == NULL)
	{
		free(tokens);
		return (NULL);
	}
while (token != NULL && i < 2)
{
    tokens[i] = token;
    token = strtok(NULL, " '\n");
    i += 1;
}
tokens[i] = NULL;
return (tokens);

}