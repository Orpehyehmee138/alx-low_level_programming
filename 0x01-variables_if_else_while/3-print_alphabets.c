#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char my_arr[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z', '\n'};
	int i;

	for (i = 0; i <= 52; i++)
	{
		putchar(my_arr[i]);
	}
	return (0);
}
