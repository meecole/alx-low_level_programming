#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabets in lowercase and then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
