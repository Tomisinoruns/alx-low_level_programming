#include <stdio.h>
#include <stdlib.h>
/**
 *main- Entry Point
 *Return: 0
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'e' && x != 'q')
putchar(x);
}
putchar('\n');
return (0);
}
