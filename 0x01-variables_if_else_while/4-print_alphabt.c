#include <stdio.h>
/**
 * main - entry point
 * return 0 always
 */
int main(void)
{
char letter;

/* Print the alphabet except for e and q */
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}
