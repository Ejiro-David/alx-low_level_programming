#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints to POSIX stdout
 * @filename: file to be read
 * @letters: number of letters to be read
 * Return: Number of letters in total or 1 for error
 */

size_t read_textfile(const char *filename, size_t letters)
{
	FILE *filePointer;
	size_t bytesRead;

	char *buffer = malloc(letters);
	filePointer = fopen(filename, "rb");

	if (filePointer == NULL)
	{
		return (0);
	}


	if (buffer == NULL)
	{
		fclose(filePointer);
		return 0;
	}

	bytesRead = fread(buffer, 1, letters, filePointer);

	fwrite(buffer, 1, bytesRead, stdout);

	free(buffer);

	fclose(filePointer);

	return (bytesRead);
}
