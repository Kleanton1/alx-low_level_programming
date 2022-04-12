#include "main.h"

/**
 * print_statement - prints the alphabets in lowercase, followed by a new line
 */
void print_statement(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}
