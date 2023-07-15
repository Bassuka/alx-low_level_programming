#include<stdio.h>

/**
 * main - Entry point of the program
 * Description - prints 0 to 9 seperated by ,
 * Return: 0 on success
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
	putchar (a);
	if (a == 57)
	{
		break;
	}
	putchar (44);
	putchar (32);
	a++;
	}
	putchar ('\n');
	return (0);
}
