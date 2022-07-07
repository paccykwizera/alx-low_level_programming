#include <main.h>

/**
 * print_alphabet - print
 * Return: Always 0.
 */
int print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
