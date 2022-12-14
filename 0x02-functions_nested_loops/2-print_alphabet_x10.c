#include "main.h"
/**
 *print_alphabet_x10- prints lowercase alphabet 10 times
 *Return: 0
 */
void print_alphabet_x10(void)
{
char x;
int i;
i = 0;
while (i < 10)
{
x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n')
i++;
}
}
