#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	s--;
	for (int i = counter; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
