#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: count
  * @argv: vector array
  * Return: 0
  */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
