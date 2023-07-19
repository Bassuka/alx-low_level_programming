#include "main.h"

/**
 * main - Entry point
 * Descritption - lowercase using new header
 * Return: Always 0 (Success)
 */
void print_alphabet(void) /* call function inside main c */
{
	int i;

	for (i = 97; i <= 122; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
