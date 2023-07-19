#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 * Description: This function prints the lowercase alphabet in a loop 10 times.
 * Each set of alphabets is separated by a new line.
 */
void print_alphabet_x10(void)
{
	int a;
	int i:

	for (a = 1; a <= 10; a++)
	{
	for (i = 97; i <= 122; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	}
}
