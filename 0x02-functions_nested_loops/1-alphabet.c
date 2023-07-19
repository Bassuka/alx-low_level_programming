#include "main.h"

/**
 * main - Entry point
 * Descritption - lowercase using new header
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
/*
 * print_alphabet
 *
 * This function prints the alphabet to the console.
 *
 * Parameters:
 *   None.
 *
 * Returns:
 *   None.
 */
{
	int i;

	for (i = 97; i <= 122; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
