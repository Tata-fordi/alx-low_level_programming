#include "main.h"
/**
  *print_triangle - printsa triangle
  *@size: the size
  *Return: empty
  */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y > 1; y--)
	{
	putchar(32);
	}
	for  (z = 0; z <= x; z++)
	{
	putchar(35);
	}
	putchar('\n');
	}
	}
}
