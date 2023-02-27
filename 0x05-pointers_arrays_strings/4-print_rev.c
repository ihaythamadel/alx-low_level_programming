#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the used string reference pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int y = 0;

	while (s[y])
		y++;
	while (y--)
		_putchar(s[y]);
	_putchar('\n');
}
