#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: parameter to be printed
 * Return: 1 if is a lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c  <= 122)
	return (1);
	else
	return (0);
}
