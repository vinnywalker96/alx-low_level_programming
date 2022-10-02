#include "main.h"

/**
  * is_prime_number - checks if integer is a prime number
  * @n: integer
  * Return: 0 or 1
  */

int is_prime_number(int n)
{
	if (n > 1 && n % 2 == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (is_prime_number(n));

}
