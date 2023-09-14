#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
if (size > 0)
{
	for (int i = 0; i < size; i++)
	{
	for (int i = 0; i < size; i++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
	}
else
{
	_putchar('\n');
}
}
