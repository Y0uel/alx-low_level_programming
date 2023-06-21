#include "main.h"
/**
 * main - Entry point
 * Discription: 'this program outputs positive or negative values'
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
