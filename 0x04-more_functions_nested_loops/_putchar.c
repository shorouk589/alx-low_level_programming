#include <unidtd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The charactr to print
 * Return: on success 1.
 *	on error, -1 is retuened, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
