#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes from src to append to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
char *temp = dest;

while (*temp)
temp++;

while (*src && n--)
*temp++ = *src++;

*temp = '\0';

return (dest);
}

