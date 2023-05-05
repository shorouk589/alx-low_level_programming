#include "main.h"

/**
 * get_endianness - chechks if a machine is little or big
 * Return: 0 for big, for 1 little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
