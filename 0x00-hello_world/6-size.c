#include <stdio.h>

/**
 * main - Entry point
 * Descritption - prints size of data type
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %zu bytes(s)\n", sizeof(char));
	printf("Size of int: %zu bytes(s)\n", sizeof(int));
	printf("Size of long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of long long: %zu bytes(s)\n", sizeof(long long));
	printf("Size of float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
