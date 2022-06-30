#include <stdio.h>

/*
 * main - prints
 * Return: o
 */



int main(void)

{

	printf("Size of a char: %lu byte(s)\n", sizeof('a'));
	printf("Size of an int: %lu byte(s)\n", sizeof(1));
	printf("Size of a long int: %lu byte(s)\n", sizeof(84983898934));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(8973892893421));
	printf("Size of a float: %lu byte(s)\n", sizeof(1.2));
	return 0;
}
