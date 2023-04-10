#include "main.h"

/**
 * flip_bits - function that returns the number of
 * bits you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip to
 * get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cmp;
	unsigned int flip;

	cmp = n ^ m;
	flip = 0;

	while (cmp > 0)
	{
		if ((cmp & 1) != 0)
			flip++;
		cmp = cmp >> 1;
	}
	return (flip);
}
