#include <stdio.h>
/**
 * main - entry point
 *
 * result - always 0 (succesful)
 */
int main(void)
{
	char alphabet[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		alphabet[i] = 'a' + i;
	}

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');

	return (0);
}
