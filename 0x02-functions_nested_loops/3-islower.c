#include "main.h"
/**
 *_islower - checks for lowercase character
 *@c: the character to check
 *Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c > 96 && c < 123)
{
_putchar(c + '1');
return (1);
}
else
{
_putchar(c + '0');
return (0);
}
}
