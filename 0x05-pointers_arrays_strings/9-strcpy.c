#include "main.h"

/**
 * file: 9-strcpy.c
 *  _strcpy - Copies a string pointed to by @src, including the
   terminating null byte, to a buffer pointed to by @dest.
 *     @dest: A buffer to copy the string to.
 *     @src: The source string to copy.
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
