#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory using malloc
 * @b:  the number of bytes to be allocated
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
