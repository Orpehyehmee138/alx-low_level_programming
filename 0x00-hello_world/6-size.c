#include <stdio.h>
/**
 * main - betty this is for you
 */
int main(void)
{
	int i;
	long int li;
	long long int lli;
	char c;
	float f;

	printf("Size of a char: %l byte(s)\n" sizeof(c));
	printf("Size of an int: %l byte(s)\n" sizeof(i));
	printf("Size of a long int: %l byte(s)\n" sizeof(li));
	printf("Size of a long long int: %l byte(s)\n" sizeof(lli));
	printf("Size of a float: %l byte(s)\n" sizeof(f));
	return (0);
}