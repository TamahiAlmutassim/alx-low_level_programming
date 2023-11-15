#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @k: The meant string .
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *k)
{
	int len = 0;

	if (*k)
	{
		len++;
		len += _strlen_recursion(k + 1);
	}

	return (len);
}
