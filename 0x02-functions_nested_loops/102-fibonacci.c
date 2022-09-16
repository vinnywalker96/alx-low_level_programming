#include <stdio.h>

/**
 * main - Print the 1st 50 fibonacci
 * numbers
 *
 * Return (0);
 */

int main(void)
{
	int i;
	long int num1 = 0, num2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;
		printf("%lu", sum);

		num1 = num2;
		num2 = sum;


		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}

	return (0);

}
