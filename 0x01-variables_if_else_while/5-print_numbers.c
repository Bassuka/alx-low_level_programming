#include <stdio.h>

/**
 * main - Entry point of the program
 * Description - prints 0 to 9
 * Return: 0 on success
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
