#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++1)
	putchar('0' + i);

	putchar('\n');

	return (0);
}
