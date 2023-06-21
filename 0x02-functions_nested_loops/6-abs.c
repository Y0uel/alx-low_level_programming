#include "main.h"
/**
 * main - Entry point
 * Discription: 'this program outputs positive or negative values'
 * Return: always 0
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
