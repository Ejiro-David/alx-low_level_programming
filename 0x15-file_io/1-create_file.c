#include "main.h"
#include <sys/stat.h>

/**
 * create_file - creates a file called
 * @filename: name of file to be filled with
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *filePointer;

	filePointer = fopen(filename, "w");

	if ((filePointer == NULL) | (text_content == NULL))
	{
		return (-1);
	}

	fputs(text_content, filePointer);

	fclose(filePointer);

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		return (-1);
	}

	return (1);
}
