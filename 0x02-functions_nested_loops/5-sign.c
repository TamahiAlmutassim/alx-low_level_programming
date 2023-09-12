#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 *
 * Return:  1 and prints + if n is greater than zero
 *          0 and prints 0 if n is zero
 *         -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
    char sign;  // Define a character to hold the sign character

    if (n > 0)
    {
        sign = '+'; // Set sign to '+'
    }
    else if (n == 0)
    {
        sign = '0'; // Set sign to '0'
    }
    else
    {
        sign = '-'; // Set sign to '-'
    }

    _putchar(sign); // Print the determined sign character

    if (n > 0)
    {
        return (1);
    }
    else if (n == 0)
    {
        return (0);
    }
    else
    {
        return (-1);
    }
}
