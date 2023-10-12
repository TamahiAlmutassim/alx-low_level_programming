#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - print arrays
 * @array: array as function parameter
 * @size: number of elements to print
 * @action: choose regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
