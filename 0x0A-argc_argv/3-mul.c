#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that multiplies 2 numbers
  * @argc: first argument
  * @argv: second argument
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}

	return (0);
}
