#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char my_array[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	int i;

	for (i = 0; i <= 25; i++)
	{
		putchar(my_array[i]);
	}
	return (0);
}
