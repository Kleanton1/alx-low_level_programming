#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Return: void which means its correct
 */

void _puts(char *str)
{
	char *c;
	int k;

	c = str;

	for (k = 0; c[k]; k++)
	{
		_putchar (c[k]);
	}
	_putchar('\n');
}
