#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
        _putchar(num);
	}
	_putchar('\n');
}

