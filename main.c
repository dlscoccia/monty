#include "monty.h"

/*
* main - main function
* @argc: number of args
* @argv: args
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
char *file = argv[1];

if (argc != 2)
    {
        printf("USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

read_file(file);

    return (0);
}