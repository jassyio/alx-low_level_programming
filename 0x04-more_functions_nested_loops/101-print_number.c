#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    int digits = 1;
    int divisor = 1;

    if (n < 0)
    {
        _putchar('-');
        n *= -1;
    }

    while (n / divisor >= 10)
    {
        digits++;
        divisor *= 10;
    }

    while (digits--)
    {
        _putchar((n / divisor) % 10 + '0');
        divisor /= 10;
    }
}
