#include "main.h"
/**
 *print_alphabet - prints the alpabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
char x;
x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
