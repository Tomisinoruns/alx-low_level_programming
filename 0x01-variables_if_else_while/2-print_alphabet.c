#include <stdio.h>
#include <stdlib.h>
/**
 *main- Entry point
 *Return: 0
 */
int main(void)
{
char x;
while (x >= 'a')
putchar(x);
while (x <= 'z')
putchar(x++);
}
