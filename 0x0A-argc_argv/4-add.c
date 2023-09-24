#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguements
 * Return: 0 for success 1 for failure
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	unsigned int j;

	if (argc == 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i] - 1); j++)
		{
			if (!isdigit((unsigned char)argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
