#include "main.h"

/**
  * factorial - funtion that returns factorial of a num
  * @n: input number
  * Return: 0,-1 or 1
  */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));

}
