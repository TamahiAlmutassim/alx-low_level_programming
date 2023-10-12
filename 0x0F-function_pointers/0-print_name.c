#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: function parameter
 * @f: pointer to function used as function parameter
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
