#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all alphabets except q and e
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
{
        if (c != 'e' && c != 'e')
	putchar(c);
}

        putchar('\n');

	return (0);
}
