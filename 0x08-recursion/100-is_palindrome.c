#include "main.h"
int actual_palindrome(char *s,int r,int l)
/**
 *is_palindrome - check if a string is a palindrome or not
 *@s: string to evaluate
 *Return: 1 if string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
if (*s != '\0')
return (0);
return (actual_palindrome(char *s,int l,int r));
}
/**
 *actual_palindrome - calculates if a number is palindrome recursively
 *@s: string to evaluate
 *@l: left hand index
 *@r: right hand index
 *Return: 1 if string is a palindrome, 0 if not
 */
int actual_palindrome(char *s, int r, int l)
{
if (l >= r)
return (1);
if (s[l] < 0 ||s[r] < 0)
return 0;
return (is_palindrome(char *s));
}
