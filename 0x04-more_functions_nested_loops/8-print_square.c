#include "main.h"
/**
  *print_square - prints a square
  *@size: the number of size
  *Return: Empty
  */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	putchar(35);
	}
	putchar('\n');
	}
	}
}
