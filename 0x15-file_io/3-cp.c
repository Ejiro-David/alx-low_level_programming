#include "main.h"

/**
 * copy_file - copy file content from
 * @file_from: from copied from
 * @file_to: file copied into
 * Return: Different error codes depending on cause of failure
 */

int copy_file(char *file_from, char *file_to)
{
	const char *err_msg98 = "Can't read from file '%s'.\n";
	const char *err_msg99 = "Can't write to file '%s'.\n";
	const char *err_msg100 = "Can't close fd '%d'.\n";
	char buffer[BUFFER_SIZE];
	int i = 0;
	int bytes_read;

	FILE *giveFile;
	FILE *collectFile;

	giveFile = fopen(file_from, "rb");

	if ((file_from == NULL) | (giveFile == NULL))
	{
		dprintf(2, err_msg98, file_from);
		i++;
		exit(98);
	}
	
	collectFile = fopen(file_to, "w");

        if ((file_to == NULL) | (collectFile == NULL))
        {
		dprintf(2, err_msg99, file_to);
		i++;
		fclose(giveFile);
                exit(99);
        }	
	
	chmod(file_to, 0664);

	do
	{
		bytes_read = fread(buffer, 1, BUFFER_SIZE, giveFile);

		fwrite(buffer, 1, bytes_read, collectFile);
	} while (bytes_read > 0);


	if ((fclose(giveFile) == EOF) || (fclose(collectFile) == EOF))
	{
		dprintf(2, err_msg100, -1);
		exit(100);
	}
	return(0);
}

/**
 * main - entry function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1.
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
