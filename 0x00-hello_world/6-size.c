#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: uding sizeof to print the size of various types
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	printf("Size of a char: %lu butes(s)\n", sizeof(char));
	printf("Size of an int: %lu butes(s)\n", sizeof(int));
	printf("Size of a long int: %lu butes(s)\n", sizeof(long int));
	printf("Size of a long long it: %lu butes(s)\n", sizeof(long long int));
	printf("Size of a float: %lu butes(s)\n", sizeof(float));
	return (0);
}
