#include "main.h"

/**
 * file:3-puts.c
 *  _puts - Prints a string to stdout.
 *  @str: The string to be printed.
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
