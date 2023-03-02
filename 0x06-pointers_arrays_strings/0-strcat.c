#include "main.h"

/**
 * *_strcat - concatene src to dest
 * @src: the source string
 * @dest: the destination
 * Return: pointer to the string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
