#include "main.h"



/**
 * print_alphabet_x10
 * Return: void
 */

void print_alphabet_x10(void)
{
char c;
int d;
for (d = 1 ; d <= 10 ; d++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
