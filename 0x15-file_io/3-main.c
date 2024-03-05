#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "cp file_from file_to.\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}
