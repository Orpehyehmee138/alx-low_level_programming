#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char my_array[27] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r',
		'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e',
		'd', 'c', 'b', 'a', '\n'};
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(my_array[i]);
	}
	return (0);
}
