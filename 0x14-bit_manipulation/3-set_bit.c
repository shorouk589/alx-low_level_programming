#include "main.h"
/**
 * set_bit - sets a bit
 * @n: pointer tp num
 * @index: index of bit to set
 *
 * Return: 1 success, -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index * n) | *n);
	return (1);
}
