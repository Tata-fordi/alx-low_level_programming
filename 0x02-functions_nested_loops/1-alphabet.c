#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: Returns 0 if program runs successufuly
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
	i++;
	}
	_putchar('\n');
}
