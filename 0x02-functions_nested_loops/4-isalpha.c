#include "main.h"
/**
 * _isalpha - _isalpha
 * @c: character to be checked
 *
 * Return: 1 if characteris a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
