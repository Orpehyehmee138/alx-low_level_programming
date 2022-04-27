#include"main.h"

/**
 * print_alphabet - It's a void function
 * return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	do {
		_putchar(c);
		c++;
	} while (c <= 'z');
	_putchar('\n');
}
