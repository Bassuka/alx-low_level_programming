#include<stdio.h>

/**
 * main - Entry point of the program
 * Description - prints alphabet in revers
 * Return: 0 on success
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
	{
	putchar (a);
	a--;
	}
	putchar ('\n');
	return (0);
}
