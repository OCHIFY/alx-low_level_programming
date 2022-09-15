#include "main.h"

/**
 * _isdigit - checks for numbers
 * @c: number
 *
 * Return: 1.
 * 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
