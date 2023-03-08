#include "main.h"

/**
 * _puts_recursion - function that print a string followed
 * a new line
 * @s: the pointer
 * Return:s
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
