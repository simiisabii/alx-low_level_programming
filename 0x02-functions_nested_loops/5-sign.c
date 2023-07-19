#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n - the value to be checked
 * Return: 1 for a positive number, -1 for a negative number, else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return(1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return(-1);
	}
	else
	{
	_putchar(48);
	return(0);
	}
}
