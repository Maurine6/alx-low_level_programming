#include "main.h"

/**
 * print _alphabet - a function that prints alphabes, in lowercase
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet (void)
{
	char letter;


	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
