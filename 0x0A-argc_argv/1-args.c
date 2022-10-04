#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
