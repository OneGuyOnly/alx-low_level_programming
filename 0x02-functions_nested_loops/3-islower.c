#include "main.h"
/**
 * _islower - Entry Point
 * Description: 'Print characters'
 * @c: The character in ASCII code
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
