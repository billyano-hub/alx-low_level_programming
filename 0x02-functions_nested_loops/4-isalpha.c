#include "main.h"

/**
 * *_isalpha - Entry
 * *
 * *@c: is the variable
 * *
 * *Return: Always 0
 */

int _isalpha(int c)
{
if ((c < 'z' &&  'a' < c) || (c < 'Z' && c > 'A'))
return (1);
else
return (0);
}
