#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
