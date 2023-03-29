/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
  int i, j;
  char leet_chars[] = "aAeEoOtTlL";
  char leet_codes[] = "4433007711";

  for (i = 0; str[i] != '\0'; i++)
  {
    for (j = 0; j < 10; j++)
    {
      if (str[i] == leet_chars[j])
      {
        str[i] = leet_codes[j];
        break;
      }
    }
  }

  return (str);
}

