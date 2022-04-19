#include"main.h"

/**
 * main - Entry point
 * @print_alphabet: It's a void function
 * return: Always(0) Success
 */
void print_alphabet(void);
int main (void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int ch;
	for(ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
