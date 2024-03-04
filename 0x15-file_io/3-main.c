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
		static const char *err_msg = "Usage cp file_from file_to";
		int i = 0;

		while (err_msg[i] != '\0')
		{
			_putchar(err_msg[i], 2);
			i++;
		}
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}
