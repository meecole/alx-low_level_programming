#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (success)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');
	return (0);

}
