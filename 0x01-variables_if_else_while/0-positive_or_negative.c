#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - A program that assign random to n
*
*determine if num is positive, negative or zero
*
*Return:0
*/

int main(void)
{

	int n;
	srand(timie(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(" is positive\n");
	}
	else if (n < 0)
	{
		printf(" is negative\n");
	}
	else
	{
		printf(" is zero\n");
	}
	return (0);

}
