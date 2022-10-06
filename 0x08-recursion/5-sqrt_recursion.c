#include "main.h"

/**
  * _sqrt_recursion - reuturns natural square root
  * @n: input number
  * Return: square root of n
  */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt_recursion(0, n));
}
