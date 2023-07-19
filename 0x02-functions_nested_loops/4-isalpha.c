#include "main.h"
/**
 * _isalpha - checks for a character of the alphabet
 * @c: character to be checked
 * Return: 1 for character of the alphabet, else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >=97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
