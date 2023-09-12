#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out the name of the file it was conpiled from
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return EXIT_SUCCESS;
}
