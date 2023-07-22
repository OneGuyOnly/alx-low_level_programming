#include "main.h"
/**
 * _isupper - Entry Point
 * Description: 'Check upper case'
 * @n: integer input
 * Return: 0 or 1
 */
int _isupper(int n)
{
	if (n >= 65 && n <= 90)
	{
		return (1);
	}
	return (0);
}
