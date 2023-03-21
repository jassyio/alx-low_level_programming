#include "main.h"

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[26];
	int i;

	/* Initialize the letters array using a loop */
	for (i = 0; i < 26; i++)
	{
		letters[i] = 'a' + i;
	}

	/* Print the letters array using putchar */
	for (i = 0; i < 26; i++)
	{
		_putchar(letters[i]);
	}
	_putchar('\n');
	return (0);
}
