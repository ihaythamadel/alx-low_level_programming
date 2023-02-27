#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to beb reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int length, j, mil;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;
	j = 0;
	mil = length / 2;
	while (mil--)
	{
		temp = s[length - j - 1];
		s[length - j - 1] = s[j];
		s[j] = temp;
		j++;
	}
}
