#include "main.h"
/**
 * main - Entry point
 * Discription: 'alphabet output'
 * Return: always 0
 */
void print_alphabet(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		_putchar(e);
	}
	_putchar('\n');
}
