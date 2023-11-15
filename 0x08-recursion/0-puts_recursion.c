#include "main.h"
/**
 * _puts_recursion - function that works like puts();
 * @k: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *k)
{
	if (*k)
	{
		_putchar(*k);
		_puts_recursion(k + 1);
	}

	else
		_putchar('\n');
}
