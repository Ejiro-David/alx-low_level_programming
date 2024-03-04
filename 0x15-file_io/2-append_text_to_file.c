#include "main.h"

/**
 * append_text_to_file - add text content to the end of a file
 * @filename: file to be appended to
 * @text_content: content to be appended
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *filePointer;

if (filename == NULL)
{
return (-1);
}

if (text_content == NULL)
{
return (1);
}

filePointer = fopen(filename, "a");

if (filePointer == NULL)
{
return (-1);
}

fputs(text_content, filePointer);
fclose(filePointer);
return (1);
}
