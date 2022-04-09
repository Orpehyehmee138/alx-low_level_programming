#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char my_array[17] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
		'9', 'A', 'B', 'C', 'D', 'E', 'F', '\n'};
	int i;

	for (i = 0; i <= 16; i++)
	{
		putchar(my_array[i]);
	}
	return (0);
}
