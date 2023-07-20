#include "main.h"
/**
 * _isalpha - Entry Point
 * Description: 'Print characters'
 * @c: The character in ASCII code
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
