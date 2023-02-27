#include "main.h"

/**
 * swap_int - swaps the value of two integer
 * @a: first pointer
 * @b: second pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
