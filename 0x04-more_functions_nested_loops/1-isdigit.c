#include "main.h"
/**
 * _idigit - Entry Point
 * Description: 'Check digit'
 * @n: integer input
 * Return: 0 or 1
 */
int _idigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	return (0);
}
