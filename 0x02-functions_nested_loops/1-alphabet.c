#include <stdio.h>

/**
 * main - print
 * Return: Always 0.
 */
int print_alphabet(void);
int print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++){
putchar(ch);
}
putchar('\n');
return (0);
}
int main(void)
{
print_alphabet(void);

return (0);

}
