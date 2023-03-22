#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
