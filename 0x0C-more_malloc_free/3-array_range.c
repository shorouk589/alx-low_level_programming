#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of int.
 * @min: min value.
 * @max: max value.
 *
 * Return: pointer to the newly created array.
 * if mun > max, returns NULL.
 * if malloc fails, returns Null.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1);
	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	ar[i] = min;

	return (ar);
}
