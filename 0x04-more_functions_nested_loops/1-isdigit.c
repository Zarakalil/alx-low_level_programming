#include "main.h"
/**
 * _isdigit - Check for a digit
 * @c: The number to be checked
 *
 * Return: 1 for digit character or 0 for others
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
