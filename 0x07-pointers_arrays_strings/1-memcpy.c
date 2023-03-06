#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area destination
 * @src: memory source
 * @n: lenght of source
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
