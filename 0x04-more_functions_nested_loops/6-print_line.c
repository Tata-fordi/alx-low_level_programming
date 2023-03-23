#include "main.h"

/**
  *print_line -  straight line in the terminal
  *@n: the number of lines to draw
  *Return: Always 0
  */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	putchar(95);
	}
	putchar('\n');
	}
}
