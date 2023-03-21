#include "main.h"
/**
 * main - prints alphabet 10 times
 *
 * return - 0 always (succesfull)
 */
void print_alphabet_x10(void) {
  char c;
  int i;
  for (i = 0; i < 10; i++) {
    c = 'a';
    while (c <= 'z') {
      _putchar(c);
      c++;
    }
    _putchar('\n');
  }
}
