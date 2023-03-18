#include <stdio.h>

/**
 * main - Entry point. Prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
char letters[52];
int i;

/* Initialize the letters array with both lowercase and uppercase letters.*/
for (i = 0; i < 26; i++)
{
letters[i] = 'a' + i;
letters[i + 26] = 'A' + i;
}

/* Print the letters array using putchar.*/
for (i = 0; i < 52; i++)
{
putchar(letters[i]);
}

putchar('\n');
return (0);
}
