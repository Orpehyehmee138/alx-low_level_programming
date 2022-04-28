#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: The value to be treated
 * Return: Absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
