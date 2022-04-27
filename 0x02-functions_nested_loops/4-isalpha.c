#include "main.h"
/**
 * _isalpha - Checkss
 * @c: type int
 * Return: 1 bla bla bla
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

