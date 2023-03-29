#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
/* Check if the first letter of a word needs to be capitalized */
if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
|| str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"'
|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
|| str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - 32;
}
}

return (str);
}

