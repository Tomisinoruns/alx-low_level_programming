#include "main.h"
/**
 *print_rev- prints a string in reverse,
 *followed by a new line
 *@str: string to reverse
 *Return: 0
 */
void print_rev(char *s)
{
int i, j, n;
i = 0;
while (s[i] != '\0')
{
i++;
}
n = i;
for (j = n - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
