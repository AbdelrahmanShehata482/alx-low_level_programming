#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
#include "main.h"

void puts2(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str=str+2;
	}
	_putchar('\n');
}
