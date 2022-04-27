#include "main.h"
/**
 * _islower - Returnz 1 if letter is lowercase, o if not
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
