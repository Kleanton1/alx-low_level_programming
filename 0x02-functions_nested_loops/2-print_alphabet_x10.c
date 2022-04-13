#include "main.h"

/**
 * print_alphabet_X10 - Prints 10 times the alphabet, in lowercase
 *
 * Return: 0 always
 */
void print_alphabet_X10(void)
{
	int count = 0;
	char alphabet;

	while (count ++ <= 9)
{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	_putchar(alphabet);
}
	_putchar('\n');
}
