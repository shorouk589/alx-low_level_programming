#include "main.h"
/**
 * positivr or negative - check 
 *
 * @i: the num to be checked
 *
 * Return: always 0
*/

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is possitive num\n", i);
	else if (i < 0)
		printf("%d is negative num\n", i);
	else
		printf("%d is zero num\n", i);
}
