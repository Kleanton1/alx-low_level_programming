#include "main.h"

/**
 * swap_int - swap the values of integers a and b 
 * @a:A pointer to an int that will be updated
 * @b:B pointer to an int that will be updated
 * Return : void that means its correct
 */

void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = 60;
	b = 10;
	printf("%d, %d\n", a, b);
	swap_int(&a, &b);
	printf("%d, %d\n", a, b);
	return (0);
}
