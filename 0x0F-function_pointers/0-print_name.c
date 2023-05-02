#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer to fun
 * @name: string to add
 * @f: pointer to fun
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
