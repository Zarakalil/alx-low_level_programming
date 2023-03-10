#include "main.h"
/**
 * factorial(int n)
 * @n: returns factorial of number
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n-1));
}
