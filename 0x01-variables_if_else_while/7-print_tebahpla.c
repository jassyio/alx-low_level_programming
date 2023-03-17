#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    /* Print the lowercase alphabet in reverse */
    for (i = 122; i >= 97; i--)
    {
        putchar(i);
    }
    putchar('\n');
    return (0);
}
