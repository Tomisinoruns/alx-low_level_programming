#include "main.h"
/**
 *_isupper- check for uppercase character
 *Return: 0
 */
int _isupper(void)
{
int c;
if (c > 64 && c < 91)
{
_putchar(c + '1');
return (1);
}
if (c > 96 && c < 123)
{
_putchar(c + '0');
return (0);
}
}
