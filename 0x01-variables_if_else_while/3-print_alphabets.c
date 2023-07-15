#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122 && b <= 90)
	{
		putchar(a);
		putchar(b);
		a++;
		b++;
	}
	putchar("\n");
	return (0);
}
