#include "main.h"

/**
 * print _alphabet - a function that prints alphabes, in lowercase
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet (void)
{
	int n;


	for (n='a'; n<='z'; n+++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
