#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @x: the number to checked
 * Return: 1 for upper letter or 0 for anything else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
