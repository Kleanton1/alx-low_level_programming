#include "main.h"

/**
 * _strlen - length of a string
 * @s: A pointer to an int that will be updated
 *
 * Return: void that t means its correct
 */

int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
	c++;
	}
	return (c);
}
