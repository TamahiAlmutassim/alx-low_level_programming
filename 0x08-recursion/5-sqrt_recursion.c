#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the square root of a number
 * @k: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int k)
{
	if (k < 0)
		return (-1);
	return (actual_sqrt_recursion(k, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @k: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int k, int i)
{
	if (i * i > k)
		return (-1);
	if (i * i == k)
		return (i);
	return (actual_sqrt_recursion(k, i + 1));
}
