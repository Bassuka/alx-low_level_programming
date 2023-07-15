#include<stdio.h>

/**
 * main - Entry point of the program
 * Description - prints all the numbers of base 16 in lowercase
 * Return: 0 on success
 */
int main(void)
{
	int a = 97;
	int b = 48;

	while (a <= 102 && b <= 57)
	{
		putchar(b);
		b++;
	}
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
