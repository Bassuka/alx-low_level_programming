#include "main.h"

/**
 * _abs - compute hte absolute value of
 * an integer
 *
 * @i: input nuumber as an integer
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
