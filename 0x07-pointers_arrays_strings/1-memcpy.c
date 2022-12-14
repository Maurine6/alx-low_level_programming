#include "main.h"
/**
 * file: 1-memcpy.c
 * The _memcpy() function copies n bytes from memory area src to memory area dest
 *
 * Returns a pointer to dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
