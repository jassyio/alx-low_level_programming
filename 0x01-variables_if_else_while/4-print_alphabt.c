#include <stdio.h>

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
