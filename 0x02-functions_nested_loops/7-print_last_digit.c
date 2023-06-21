#include "main.h"
/**
 * main - Entry point
 * Discription: 'this program outputs positive or negative values'
 * Return: always 0
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
