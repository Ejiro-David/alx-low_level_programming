#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all args
 * Return: 0 for success
 * @argc: args count
 * @argv: array of args
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
