#include "main.h"

/**
 * copy_file - copy file content from
 * @file_from: from copied from
 * @file_to: file copied into
 * Return: Different error codes depending on cause of failure
 */

int copy_file(char *file_from, char *file_to)
{
	FILE *filePointer;

	filePointer = fopen(file_from, "rb");

	if ((file_from == NULL) | (filePointer == NULL))
	{

	
}
